#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include "libshell/libshell.h"
# define BUF_SIZE 4

int print_char(char c);
char *read_line(const int fd);
void execute_command(char *command);
char *extract_path(char **env);
int strings_n_compare(char *s1, const char *s, size_t n);
char **string_split(const char *str, char separator);
char *validate_command(char **path_array, char *command);
char *concat_strings(char *dest, const char *src);
int main(int ac , char **argv, char **env)
{
  char *command;
  char *path;
  char **path_array;
  char *command_path;
  char **separate_path;
  char *slash_command;
  char slash[20] = "/";
  int i;
  
  command = NULL;
  while(1)
    {
      print_char('$');
      command = read_line(0);
      printf("Command = %s\n", command);
      path = extract_path(env);
      printf("$PATH = %s\n", path);
      path_array = string_split(path, '=');
      printf("PATH_ARRAY = %s\n", path_array[1]);
      separate_path = string_split(path_array[1], ':');
      for(i = 0; separate_path[i] != '\0'; i++)
	printf("SEPARATE PATHS = %s\n", separate_path[i]);
      slash_command = concat_strings(slash, command);
      printf("SLASH_COMMAND = %s\n", slash_command);
      command_path = validate_command(separate_path, slash_command);
      execute_command(slash_command);
      free(command);
    }
  return (0);
}

/*For printing character*/
int print_char(char c)
{
  return (write(1, &c, 1));
}

/*For reading a line from stdin*/
char *read_line(const int fd)
{                                                                                                                                         
  char *buffer;
  int rd;
  int bufsize;

    bufsize = BUF_SIZE;       
    buffer = malloc(bufsize * sizeof(char));                                                                                                             
    if(buffer == NULL)                                                                                                                                       {                                                                                                                                                    
      perror("Malloc");                                                                                                                                  
      return NULL;                                                                                                                                      
    }
    rd = read (fd, buffer, bufsize); 
    if(rd == -1)                                                                                                                                               return NULL;
    buffer[rd + 1] = '\0';
  return buffer;
}

/*Execute a command. Currently the command and the path is given inside the function*/
void execute_command(char *command)
{
  pid_t pid;
  char *path;
  char *exec_argv[3];
  int status;

  exec_argv[0] = "/bin/ls";
  exec_argv[1] = "-la";
  exec_argv[2] = NULL;
  if((pid = fork()) == -1)
    {
      perror("Fork");
    }
  if(pid == 0)
    {
      /* printf("%s", command);*/
      execve(exec_argv[0], exec_argv, NULL);
    }
  else
    {
      wait(&status);
      printf("Child terminated");
    }
}

/*Extract $PATH from env variable*/
char *extract_path(char **env)
{
  int i;
  char *path;
  int flag;
  char *s1;
  char *env9;

  s1 = "PATH=";
  for(i = 0; env[i] != '\0'; i++)
     {
    flag = 1;
      env9 = env[i];
      flag = strings_n_compare(s1, env9, 4);
      if(flag == 0)
	{
	  path = env9;
	}
    }
  return path;
}  

/*Compares string to find the path*/
int strings_n_compare(char *s1, const char *s, size_t n)
{
  size_t i;
  i = 0;
  while(((s1[i] != '\0') && (s1[i] == s[i])) && (i < n))
    {
      i++;
    }
  if(s1[i] == s[i])
    return 0;
  return (s1[i] - s[i]);
}

/*Checks whether a command is valid or not. If valid, returns the path else, return NULL*/
char *validate_command(char **path_array, char *command)
{
  int i;
  char *path;
  int flag;
  DIR *dir;
  
  for(i = 0; path_array[i] != 0; i++)
    {
      path = path_array[i];
      dir = opendir(path);
      if(dir == NULL)
	printf("No directory");
      else
	printf("%s\n", path);
      /* flag = access(path, F_OK);
      if(flag == 0)
      return path;*/
 }
  return path;
}

/*Concatenate strings*/
char *concat_strings(char *dest, const char *src)
{
  int i, count = 0, j;
  for (i = 0; dest[i] != '\0' ; i++)
    {
      count++;
    }
  for (i = count, j = 0; src[j] != '\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  return dest;
}
