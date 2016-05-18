# define BUF_SIZE 128
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*For reading a line from stdin*/
char *read_line(const int fd)
{
  char *buffer;
  int rd;
  int bufsize;

  bufsize = BUF_SIZE;
  /*Allocate memory for buffer*/
  buffer = malloc(bufsize * sizeof(char));
  if(buffer == NULL) {                                                                                                                                   
    perror("Malloc");
    return NULL;
  }
  /*Read the content from stdin*/
  rd = read (fd, buffer, bufsize);
  if(rd == -1){                                                                                                                                          
    return NULL;
  }
  buffer[rd-1] = '\0'; /*To remove the new line from the buffer*/
  return buffer;
}
