#include <stdio.h>
/*Print the absolute value of a number*/
int absolute(int n)
{
  if ( n >= 0 )
    {
      printf("%d",n);
      return (n);
    }
  else
    {
      n = n*-1;
      printf("%d",n);
      return(n);
    }
}  
