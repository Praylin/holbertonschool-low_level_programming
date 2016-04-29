int power(int x, int y)
{
  long pow = 1;
  if ( (y < 0) || (x < 0)  )
    return -1;
  while (y >= 1)
    {
      pow = pow * x;
      y--;
      if (pow > 2147483647)
	return -1;
    }
  return ((int) pow);
}
