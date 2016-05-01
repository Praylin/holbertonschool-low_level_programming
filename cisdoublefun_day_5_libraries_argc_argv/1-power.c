/*Find power of a number using recursion*/
int power(int x, int y);
int power(int x, int y)
{
  if (y < 0 || x < 0)
    return -1;
  else
    {
      if (y == 1)
	return x*y;
      else if (y == 0)
	return 1;
      else if (x > 2147483647)
	return -1;
      else
	{
	  x = x * power(x,y-1);
	  return x;
	}
    }
}
