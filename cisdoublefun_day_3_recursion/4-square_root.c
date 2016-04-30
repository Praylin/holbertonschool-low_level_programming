/*Square root of a number using loop*/
int square_root(int n)
{
  int x = 0;
  x = n - 1;
  if ((n == 0) || (n == 1))
    return n;
  else if(n < 0)
    return -1;
  else
    {
      while(x > 0)
	{
	  if((x*x) == n)
	    {
	      break;
	    }
	  else
	    {
	      x = x-1;
	      if (x == 0)
		return -1;
	    }
	}
    }
  return x;
}
