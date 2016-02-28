#include <stdio.h>
/*Prints n number of triangles with height h*/ 
void triangles_in_the_term(int h, int n)
{
  int i = 1, j = 1, k = 0, count = 0, m;
  for (count = 0; count < n; count++)
    {
      for (i = 1; i <= h; i++)
	{
	  for(j = 1; j <= (h-i); j++)
	    {
	      printf(" ");
	    }
	  for(k = (h-i+1); k <= h; k++)
	    {
	      printf("*");
	    }
	  for(m = 1; m <= i-1; m++)
	    {
	      printf("*");
	    }
	  printf("\n");
	}
    }
}
