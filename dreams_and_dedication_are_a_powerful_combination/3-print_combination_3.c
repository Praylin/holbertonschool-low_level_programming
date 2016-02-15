#include "my_functions.h"
/*Print Combination of 3 numbers*/
void print_combination_3()
{
  int i, j = 1, a[10000], tens, size, units, temp, hundreds, count;
  for (i = 10; i <= 99; i++)
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
		   print_char('0');
		   print_char(tens+'0');
		   print_char(units+'0');
		   print_char(',');
		   print_char(' ');
		 }
	    }
	}
    }
  i = 100;
  for (count = 100; count < 999; count++)
    {
      temp = count;
      while(temp > 1)
	{
	  units = temp % 10;
	  temp = temp / 10;
	  tens = temp % 10;
	  hundreds = temp / 10;
	  temp = temp / 10;
	}
      i++;
      a[i] = (units * 100) + (tens * 10) + hundreds;
      i++;
      a[i] = (units * 100) + (hundreds * 10) + tens;
      i++;
      a[i] = (tens * 100) + (units * 10) + hundreds;
      i++;
      a[i] = (tens * 100) + (hundreds * 10) + units;
      i++;
      a[i] = (hundreds * 100) + (units * 10) + tens;
      if(units != 0 && tens != 0)
	{
	  if(units != tens && units != hundreds && tens != hundreds)
	    {
	      size = sizeof(a);
	      for ( j = 1 ; j <= size ; j++ )
		{
		  if (a[j] == count)
		    break;
		}
	      if (a[j] != count)
		{
		  print_char(',');
		  print_char(' ');
		  print_char(hundreds+'0');
		  print_char(tens+'0');
		  print_char(units+'0');
		}
	    }
	}
    }
}
