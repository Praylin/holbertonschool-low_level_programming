#include <stdlib.h>
char **string_split(char *str)
{
  char *string_array;
  int i;
  char **tab;
  int j;

  for(i = 0; str[i] != '\0'; i++);
  string_array = malloc(i * sizeof(char));
  if(string_array == NULL)
    return NULL;
  i = 0;
  for(i = 0; str[i] != '\0'; i+j)
    {
      for(j = 0; str[j] != ' '; j++)
	tab[i] = str[j];
    }
  return(tab);
}
