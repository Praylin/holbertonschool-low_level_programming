#include "str_struct.h"
#include <stdlib.h>
struct String *string_to_struct(char *str)
{
  struct String *var;
  int i;

  var = malloc(sizeof(struct String));
  if(var == NULL)
    return NULL;
  var->str = str;
  for(i = 0; str[i] != '\0'; i++);
  var->length = i;
  return(var);
}
