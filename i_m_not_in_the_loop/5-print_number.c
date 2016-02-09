#include "my_functions.h"
#include <stdlib.h>

void print_number(int n)
{
  int temp, factor = 1;
  char char_num;
  if ( n > 0 )
    {
  temp = n;
  while(temp)
    {
      temp = temp / 10;
      factor = factor * 10;
    }
  while (factor > 1)
    {
      factor = factor / 10;
      char_num = n + '0';
      print_char(char_num);
      n = n % factor;
    }
    }
}

