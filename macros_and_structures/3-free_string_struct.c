#include "str_struct.h"
#include <stdlib.h>
/*
function that frees a struct String
*/
void free_string_struct(struct String *str)
{
  free(str);
}
