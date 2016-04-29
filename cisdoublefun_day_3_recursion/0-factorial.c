int factorial(int n)
{
  long i;
  i = n;
  if ((n == 0) || (n == 1))
    return 1;
  else if ( n < 0 )
    return -1;
  else
    {
      n = n - 1;
      while(n >= 1)
	{
	  i = i * n;
	  n--;
	  if (i > 2147483647)
	    return -1;
	}
    }
  return ((int)i);
}
