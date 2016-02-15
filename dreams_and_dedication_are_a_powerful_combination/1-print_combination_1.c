#include "my_functions.h"
/*Print combination of 1 number*/
void print_combination_1()
{
  int i;
  for(i=0; i<=9; i++)
    { 
      if(i != 9)
	{
	  print_char(i+'0');
	  print_char(',');
	  print_char(' ');
	}
      else
	print_char(i+'0');
    }
}
