#include "my_functions.h"
/*Prints the alphabets in lowercase*/
void print_alphabet()
{
  char alph = 'a';
  int i;
  for (i = 1 ; i < 27; i++)
    {
      print_char(alph);
      alph++;
    }
}
