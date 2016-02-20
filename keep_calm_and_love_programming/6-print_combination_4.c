#include "my_functions.h"
/*prints - on one line - all possible combinations of two two-digit numbers*/
void print_combination_4(void)
{
  int i, j, k, l, n1, n2;
  for (i = 0; i <= 9; i++)
    {
      for (j = 0; j < 9; j++)
	{
	  for(k = 0; k <= 9; k++)
	    {
	      for(l = 1; l <= 9; l++)
		{
		
		      n1 = i*10 + j;
		      n2 = k*10 + l;
		     
			if(n2 > n1)
			  {
			    print_number(i);
			    print_number(j);
			    print_char(' ');
			    print_number(k);
			    print_number(l);
			    print_char(',');
			    print_char(' ');
			  }
		    
		}
	    }
	}
    }
}
