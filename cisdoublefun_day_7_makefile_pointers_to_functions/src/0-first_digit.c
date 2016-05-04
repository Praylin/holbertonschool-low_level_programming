/*Function to print first digit*/
int first_digit(int);
int first_digit(int n)
{
   if (n == 0)
    return(n);
  else if (n > -10 && n < 0)
    {
      n = n * -1;
      return(n);
    }
  else if (n < 10 && n > 0)
    {
      return(n);
    }
    else if (n >= 10)
    {
      while (n >= 10)
	{
	  n = n / 10;
	}
      return(n);
    }
   else
    {
      while ( n <= -10)
	{
	  n = n/10;
	}
      n = n * -1;
      return(n);
      }
}
