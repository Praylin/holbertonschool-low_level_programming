# include "my_functions.h"
/* Prints all numbers of base 16 */
void print_base16()
{
  int i,num = 0;
  char char_num, alph = 'A';
  for (i = 0; i<10; i++)
    {
      char_num = num + '0';
      print_char(char_num);
      num++;
    }
  for (i = 0; i<6; i++)
    {
      print_char(alph);
      alph++;
    }
}
