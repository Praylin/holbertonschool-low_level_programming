#include <stdio.h>
/*prints the first 50 Fibonacci numbers*/
int main(void)
{
  int n1 = 1, n2 = 2, count,fib = 0;
  printf("%d", n1);
  printf(", ");
  printf("%d", n2);
  printf(", ");
  for (count = 3; count <= 50; count++)
    {
      if (count == 50)
	{
	  printf("%d", fib);
	}
      else
	{
	  fib = n1 + n2;
	  printf("%d",fib);
	  printf(", ");
	  n1 = n2;
	  n2 = fib;
	}
    }
  return(0);
}
      
