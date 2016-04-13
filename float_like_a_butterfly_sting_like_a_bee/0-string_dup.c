/*Function returns a pointer to newly allocated memory */ 
#include <stdlib.h>

char *string_dup(char *str)
{
  char *s = NULL;
  int i;
  s = malloc(sizeof(*str));
  for(i = 0; str[i] != '\0'; i ++)
    s[i] = str[i];
  return s;
}
