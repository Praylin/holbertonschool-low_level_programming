/*
Program that prints the content of a file on the standard output
*/
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

long file_size(char *filename);
int main(int ac, char **av)
{
  int fd;
  int rd;
  int count;
  int wr;
  char *filename;
  char *buffer;
  
  if(ac == 2)
    {
      filename = av[1];
      count = 1;
      fd = open(filename, O_RDONLY); /*Opening file*/
      if(fd == -1)
	{
	  perror("open");
	  return (1);
	}
      count = (int)file_size(filename); /*Finding size of file*/
      buffer = malloc(count * sizeof(char)); /*Allocate sufficient space in memory for the content of file*/
      if(buffer == NULL)
	return (1);
      buffer[count+1] = '\0';
      rd = read(fd, buffer, count); /*Read file*/
      if(rd == -1)
	{
	  perror("Read");
	  return (1);
	}
      wr = write(1, buffer, count);
      if(wr == -1)
	{
	  perror("Write");
	  return (1);
	}
      free(buffer);
    }
  else
    return (1);
  close(fd);
  return (0);
}

/*Function that returns the size of a file in type long.*/
long file_size(char *filename)
{
  struct stat sb;
  
  if (stat(filename, &sb) == -1) 
    return -1;
  return (sb.st_size);
 }
