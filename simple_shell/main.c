# define BUF_SIZE 128
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int print_char(char c);
char *read_line(const int fd);
int read_char(char c, int fd); 
int main(int ac , char **argv, char **env)
{
  char *command;
  pid_t pid;
  char *exec_argv[] = {"/bin/ls", "-la", NULL};
  int status;
  char c = '\0';

  print_char('$');
  command = read_line(0);
  printf("%s", command);
  if((pid = fork()) == -1)
    {
      perror("Fork");
      return (1);
    }
  if(pid == 0)
    {
      execve(exec_argv[0], exec_argv, env);
    }
  else
    {
      wait(&status);
      printf("Child terminated");
    }
  return (0);
}

char *read_line(const int fd)
{
  int bufsize;                                                                                                                                         
  char *buffer;
  int rd;
  

  bufsize = BUF_SIZE;              
  buffer = malloc(bufsize * sizeof(char));                                                                                                             
  if(buffer == NULL)                                                                                                                                     
    {                                                                                                                                                    
      perror("Malloc");                                                                                                                                  
      return NULL;                                                                                                                                      
    }     
  rd = read (fd, buffer, BUF_SIZE);                                                                                                                    
  if(rd == -1)                                                                                                                                           
    return NULL;                                                                                                                                         
  buffer[rd+1] = '\0';
  /*printf("%d", rd);
  while(buffer[i] != EOF)
    {
      if(buffer[i] == '\n')
	print_char('$');
      i++;
      }*/
  free(buffer);
  return buffer;
}

/*
int read_char(char c, int fd)
{
  return(read(fd, &c, 1));
}
*/