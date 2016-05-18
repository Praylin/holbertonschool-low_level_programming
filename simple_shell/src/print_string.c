#include "my_functions.h"

/*Function to print a string*/
void print_string(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    print_char(str[i]);
  }
  print_char('\n');
}
