#include "str_struct.h"
#include <stdlib.h>
/*
function that stores a string and its length in a newly allocated structure, and return the address of this structure
*/
struct String *string_to_struct(char *str)
{
  struct String *obj; /*Pointer to structure variable creation*/ 
  int i;
  char *copy;

  obj = malloc(sizeof(struct String)); /*Allocate memory for pointer to structure variable*/
  if (obj == NULL)
    return (NULL);
  for(i = 0; str[i] != '\0'; i++); /*Find length of content in str*/
  copy = malloc((i+1) * sizeof(char));
  if (copy == NULL)
    return (NULL);
  for(i = 0; str[i] != '\0'; i++)
    copy[i] = str[i]; /*The str element of the structure must hold a copy of the string passed in parameter*/
  obj->str = copy; /*Copy the content in copy to member definition str*/
  obj->length = i; /*Copy the length to member definition length*/
  return(obj);
}
