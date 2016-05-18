#include "my_functions.h"

int strings_n_compare(char *s1, const char *s, size_t n);
/*Extract $PATH from env variable*/
char *extract_path(char **env)
{
  int i;
  char *path;
  int flag;
  char *s1;
  char *env9;

  s1 = "PATH=";
  for(i = 0; env[i] != '\0'; i++) {
    flag = 1;
    env9 = env[i];
    flag = strings_n_compare(s1, env9, 4);
    if(flag == 0) {
      path = env9;
    }
  }
  return path;
}
