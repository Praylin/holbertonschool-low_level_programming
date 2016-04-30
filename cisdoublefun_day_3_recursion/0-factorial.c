int factorial(int n)
{
  int c = 1;
  long fact = n;
  if ((n == 0) || (n == 1))
    fact = 1;
  else if (n < 0)
    fact = -1;
  else
    {
      while(c < n)
	{
	  fact = fact * c;
	  if ((fact > 2147483647) || (fact < -2147483648))
	    {
	      fact = -1;
	      break;
	    }
	  c++;
	}
    }
  return ((int)fact);
}
