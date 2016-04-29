int power(int x, int y)
{
  if ((y < 0) || (x < 0))
    return -1;
  else if ((y == 1) && (x > 0))
    return x*y;
  else if(y == 0)
    return 1;
  else if ((x*x) > 46341)
    return -1;
  return (x * power(x, y-1));
}
    
    
