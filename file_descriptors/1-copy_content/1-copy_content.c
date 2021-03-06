/*
Program that copies the content of a file into another file
*/
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

long file_size(char *filename);
int main(int ac, char **av)
{
  int fd1;
  int rd;
  int wr;
  int fd2;
  char *filename1;
  char *buffer;
  char *filename2;
  int count;
  int ch;
  
  if(ac == 3)
    {
      filename1 = av[1]; /*Source file*/
      filename2 = av[2]; /*Destination file*/
      count = 1;
      fd1 = open(filename1, O_RDONLY); /*File descriptor for source file*/
      if(fd1 == -1)
	{
	  perror("Open");
	  return 1;
	}
      count = (int)file_size(filename1); /*Finding the size of file*/
      buffer = malloc(count * sizeof(char)); /*Allocating enough memory for the content in source file*/
      if(buffer == NULL)
	return 1;
      buffer[count+1] = '\0';
      rd = read(fd1, buffer, count); /*Read from source file*/
      if(rd == -1)
	{
	  perror("Read");
	  return 1;
	}
      fd2 = open(filename2, O_WRONLY); /*File descriptor for destination file*/
      if(fd2 == -1)
	{
	  perror("Open");
	  return 1;
	}
      wr = write(fd2, buffer, count); /*Write in destination file*/
      if(wr == -1)
	{
	  perror("Write");
	  return 1;
	}
      ch = chmod(filename2, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH); /*Setting file permissions for destination file*/
      if(ch == -1)
	{
	  perror("File Permissions");
	  return 1;
	}
      close(fd1); /*Closing 2 file descriptors*/
      close(fd2);
      free(buffer);
    }
  else 
    return (1);
  return(0);
}

/*Function to find the size of a file*/  
long file_size(char *filename)
  {
    struct stat sb;

    if (stat(filename, &sb) == -1)
      return -1;
    return (sb.st_size);
  }

      
