#include "my_functions.h"

void print_number(int n)
{
  int  digit;
  char char_num;
  if ( n == 0)
    {
      print_char(n+'0');
    }
  else if ( n < 0)
    {
      n = n * -1 ;
      /* while ( n > 0)
	{
	  temp = temp * 10;
	  temp = temp + n%10;
	  n = n / 10;
	  }*/
      print_char('-');
      while ( n > 0)
	{
	  digit = n % 10;
	  char_num = digit + '0';
	  print_char(char_num);
	}
    }
  else
    {
      /*  while ( n > 0)
	{
	  temp = temp * 10;
	  temp = temp + n%10;
	  n = n / 10;
	  }*/
      while ( n > 0)
	{
	  digit = n % 10;
	  char_num = digit + '0';
	  print_char(char_num);
	}
    }
}

