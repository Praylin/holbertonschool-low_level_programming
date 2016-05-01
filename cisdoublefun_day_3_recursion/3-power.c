/*Power of a number using recursion*/
/*int find_power(long pow, int x, int y);*/

int power(int x, int y)
{
  long pow1 = x;
  if ((y < 0) || (x < 0) || (pow1 > 2147483647) || (pow1 < -2147483648))
    pow1 = -1;
  else if ((y == 1) && (x > 0))
    pow1 = x;
  else if(y == 0 || x == 1)
    pow1 = 1;
  else if((pow1 > (2147483647 / x)))
    pow1 = -1;
  else if (y > 0)
    {
      if((pow1 >2147483647) || (pow1 < -2147483648))
	pow1 = -1;
      else
	{
	  pow1 = x * power(x, y-1);
	}
    }
  return ((int)pow1);
}

/*int find_power(long pow, int x,int y)      
{
  if(y > 0)
    pow = x * find_power(pow, x, y-1);
  return ((int)pow);
  }*/
