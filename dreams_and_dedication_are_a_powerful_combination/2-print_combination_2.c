#include "my_functions.h"
/*Print combination of 2 numbers*/
void print_combination_2()
{
  int i, j = 1, a[100], tens, units, temp;
  for (i = 1; i < 10; i++)
    {
      if(i != 9)
	{
	  print_char('0');
	  print_char(i+'0');
	  print_char(',');
	  print_char(' ');
	}
      else
	{
	  print_char('0');
	  print_char(i+'0');
	}
      a[i] = i * 10;
    }
  for (i = 10; i < 99; i++)
    { 
      temp = i;
      while(temp > 1)
	{
	  units = temp % 10;
	  tens = temp / 10;
	  temp = temp / temp;
	}
      a[i] = (units*10) + tens;
      if(tens != units)
	{
	  if(units != 0)
	    {
	      for ( j = 1 ; j <= i ; j ++)
		{
		  if (a[j] == i)
		    break;
		}
	       if (a[j] != i)
		 { 
		   print_char(',');
		   print_char(' ');
		   print_char(tens+'0');
		   print_char(units+'0');
		 }
	    }
	}
    }

}
