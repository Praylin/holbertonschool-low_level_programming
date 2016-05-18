#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>
#include "libshell.h"
#include "my_functions.h"

int main(__attribute__((unused)) int ac , __attribute__((unused)) char **argv, char **env)
{
  char *command;
  char *path;
  char **path_array;
  char **separate_path;
  char *slash_command;
  char slash[20] = "/";
  int i = 0;
  char *whole_path;
  int validation;
  char **split_command;
  char *valid_command;
  int status;
  
  validation = 0;

  while(1) {
      print_char('$');
      /*Read the command from stdin*/
      command = read_line(0);
      /*Split command as command and options*/
      split_command = string_split(command, ' ');
      /*Extract $PATH from env*/
      path = extract_path(env);
      /*Split path with = symbol*/
      path_array = string_split(path, '=');
      /*Seperate each path by :*/
      separate_path = string_split(path_array[1], ':');
      /* Concatnate / with command*/
      slash_command = concat_strings(slash, split_command[0]);
      /*Check if entered command is env, then print all env variables and free the allocated memory*/
      if(strings_compare(split_command[0], "env") == 0){
	  for(i = 0; env[i] != '\0'; i++) {
		print_string(env[i]);
	    }  
	  free(command);
	  free(split_command);
	}
      /*Check if entered command is exit, then free the allocated memory and exit*/
      else if(strings_compare(split_command[0], "exit") == 0) {
	  free(command);
	  free(split_command);
	  exit(0);
	}
      /*Check whether the entered command is echo $?, then print the status of previously run command*/
      else if(strings_compare(command, "echo $?") == 0) {
	  print_char(status + '0');
	  free(command);
	  free(split_command);
	}
      /*Condition for any commands other than the builtin command*/
      else {
	  /*Loop through each path to find the correct path*/
	  for(i = 0; separate_path[i] != '\0'; i++) {
	      /*Concatnate each path with command*/
	      whole_path = concat_strings(separate_path[i], slash_command);
	      validation = 0;
	      /*Validate whether file(command) exists or not*/
	      validation = validate_command(whole_path);
	      /*If command(file) exists, store the path in a variable and break from the loop*/
	      if(validation != -1) {
		  valid_command = whole_path;
		  break;
		}
	    }
	  /*Execute the command with valid path and option and store the status*/
	  status = execute_command(valid_command, split_command[1]);
	  /*If entered command is invalid*/
	  /*if(validation == -1) {
	    print_string("Command not found");*/
	  free(command);
	  free(split_command);	  
      }
    }
  return (0);
}

