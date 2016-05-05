#include "str_struct.h"
#include <stdio.h>
void print_string_struct(struct String *str)
{
  printf("%s", str->str);
  printf(",");
  printf("%d", str->length);
  printf("\n");
}
