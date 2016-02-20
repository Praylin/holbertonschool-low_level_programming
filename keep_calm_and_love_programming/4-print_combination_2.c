#include <stdio.h>
/*Print all combination of 2 digits*/
void print_combination_2(void)
{
  int i,j;
  for (i = 0; i < 9; i++)
    {
      /* printf("%d",i);*/
      for (j = i+1; j <= 9; j++)
	{
	  if (i == 8 && j == 9)
	    {
	      printf("%d%d",i,j);
	    }
	  else
	    {
	      printf("%d%d",i,j);
	      printf("%c",',');
	    }
	}
    }
}
