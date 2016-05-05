#include "str_struct.h"
int print_char(char c);

/*
 function that prints the content of a struct String
*/

void print_string_struct(struct String *str)
{
  int i;

  for(i = 0; str->str[i] != '\0'; i++)
    {
      print_char(str->str[i]);
    }
  print_char(',');
  print_char(' ');
  print_char(i + '0');
  print_char('\n');
}
  
