#include <stdlib.h>
char *string_dup(char *str)
{
  int i;
  int count;
  char *dup;
  i = 0;

  while(str[i] != '\0')
    {
      i++;
    }
  count = i + 1;
  i = 0;
  dup = malloc(count * sizeof(char));
  if(dup == NULL)
    return NULL;
  while(i < count)
    {
      dup[i] = str[i];
      i++;
    }
  dup[i] = '\0';
  return dup;
}
