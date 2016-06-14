#include <unistd.h>
/*Prints a character*/
int print_char(char c)
{
  return(write(1, &c, 1));
}
