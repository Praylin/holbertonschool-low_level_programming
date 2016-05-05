#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, int n)
{
  char *new_string;
  int i = 0;
  int len = 0;
  int j = 0;

  while(s1[i] != '\0')
    {
      i++;
    }
  len =  i + n;
  new_string = malloc(len * sizeof(char));
  if (new_string == NULL)
    return NULL;
  i = 0;
  while(s1[i] != '\0')
    {
      new_string[i] = s1[i];
      i++;
    }
  while(i < len)
    {
      new_string[i] = s2[j];
      i++;
      j++;
    }
  new_string[i] = '\0';
  return new_string;
}
  
