#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 128

long file_size(char *filename);
int file_exist (char *filename);
/*Function that does cat command*/
int main(int ac, char **av)
{
  int fd;
  int rd;
  int count;
  int wr;
  int i;
  char *filename;
  char *buffer;
  char buf[BUF_SIZE];
  
  i = 0;
  if(ac > 1) /*Concatnates 2 files*/
  {
    for(i = 1; i < ac; i++)
      {
	filename = av[i];
	if (file_exist (filename))
	  {
	    count = 1;
	    fd = open(filename, O_RDONLY); /*Opening file*/
	    if(fd == -1)
	      {
		perror("Open");
		return 1;
	      }
	    count = (int)file_size(filename); /*Finding size of file*/
	    buffer = malloc(count * sizeof(char)); /*Allocate sufficient space in memory for the content of file*/
	    if(buffer == NULL)
	      return 1;
	    buffer[count + 1] = '\0';
	    rd = read(fd, buffer, count); /*Read file*/
	    if(rd == -1)
	      {
		perror("Read");
		return 1;
	      }
	    wr = write(1, buffer, count+1);
	    if(wr == -1)
	      {
		perror("Write");
		return 1;
	      }
	  }
	else
	  {
	    perror("No file");
	    return 1;
	  }
      }
  }
  else /*Output the content in stdin*/
    {
      rd = read(0, buf, BUF_SIZE);
      if(rd == -1)
	{
	  perror("Read");
	  return (1);
	}
      wr = write(1, buf, rd);
      if(wr == -1)
	{
	  perror("Write");
	  return(1);
	}
    }
      
  close(fd);
  free(buffer);
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

int file_exist (char *filename)
{
  struct stat   buffer;   
  return (stat (filename, &buffer) == 0);
}
