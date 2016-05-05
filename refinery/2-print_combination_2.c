#include "my_functions.h"
void print_combination_2(void)
{
  int i;
  int j;

  i = 0;
  j = 1;
  for(i = 0; i <= 9; i++)
    for(j = 1; j <= 9; j++)
      {
	if(i < j)
	  {
	    if((i == 8) && (j == 9))
	      {
		print_char(i + '0');
		print_char(j + '0');;
	      }
	    else 
	      {
	        print_char(i + '0');
                print_char(j + '0');
		print_char(',');
		print_char(' ');
	      }
	  }
      }
}
