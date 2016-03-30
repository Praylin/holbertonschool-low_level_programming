/*Factorial using recursion*/
int factorial(int n)
{
  if (n < 0)
    return -1;
  else 
    {
      if (n == 1)
	return (n*1);
      else if (n > 2147483647)
	return -1;
      else
	{
	  n = n * factorial(n-1);
	  return n;
	}
    }
}
      
