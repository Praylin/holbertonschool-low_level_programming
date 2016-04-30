/*Factorial using recursion*/
int factorial(int n)
{
  long fact = n;

  if ((n == 0) || (n == 1))
    fact = 1;
  else if ((n < 0))
    fact = -1;
  else if((fact > 2147483647) || (fact < -2147483648))
    fact = -1;
  else if (n > 0)
    {
      fact = fact * factorial(n - 1);
      if ((fact < 0) || (fact> 2147483647) || (fact < -2147483648))
	fact = -1;
    }
  return ((int)fact);
}

 
