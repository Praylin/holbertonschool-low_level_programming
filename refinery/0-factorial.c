#include <limits.h>
int factorial(int n)
{
  long fact;
  int i;
  
  i = 1;
  fact = 1;
  if (n < 0)
    fact = -1;
  else if((n == 0) || (n == 1))
    fact =1;
  else
    {
      while(i <= n)
	{
	  fact = fact * i;
	  i++;
	  if ((fact < INT_MIN) || (fact > INT_MAX))
            {
              fact = -1;
              break;
            }
	}
    }
  return fact;
}
  
