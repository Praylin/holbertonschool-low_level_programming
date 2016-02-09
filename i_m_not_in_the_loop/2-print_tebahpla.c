#include "my_functions.h"
/* Prints the lowercase alphabets in reverse order */
void print_tebahpla()
{
  int i;
  char alph = 'z';
  for (i = 27; i>1; i--)
    {
      print_char(alph);
      alph--;
    }
}
