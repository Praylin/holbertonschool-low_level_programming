int find_factorial(int n, long num);
int factorial(int n)
{
  long num = 0;
  int fact = 0;
  /*if ( n == 0)
    return 1;
  else if( n < 0 || n > 200000)
    return -1;
  else
  {*/
      fact  =  find_factorial(n, num);
      /* }*/
  return fact;
}

int find_factorial(int n, long num)
{
  if ( n == 0)
    return 1;
  else if( n < 0 || n > 200000)
    return -1;
  else if (num > 2147483647 || num < 0)
    return -1;
  else
    num = n * find_factorial(n-1, num);
  return ((int)num);
}
