#include "str_struct.h"
#include <stdlib.h>
/*
function that stores a string and its length in a newly allocated structure, and return the address of this structure
*/
struct String *string_to_struct(char *str)
{
  struct String *obj; /*Pointer to structure variable creation*/ 
  int i;

  obj = malloc(sizeof(struct String)); /*Allocate memory for pointer to structure variable*/
  if (obj == NULL)
    return (NULL);
  obj->str = str; /*Copy the content in str to member definition str*/
  for(i = 0; str[i] != '\0'; i++); /*Find length of content in str*/
  obj->length = i; /*Copy the length to member definition length*/
  return(obj);
}
