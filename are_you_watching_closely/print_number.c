/*Prints an int number using print_char.c*/
int print_char(char c);
void print_number(int n)
{
  int  digit;
  int temp = 0;
  char char_num;
  if ( n == 0)
    {
      print_char(n+'0');
    }
  else if ( n < 0)
    {
      n = n * -1 ;
      while ( n > 0)
	{
	  temp = temp * 10;
	  temp = temp + n%10;
	  n = n / 10;
	}
      print_char('-');
      while ( temp > 0)
	{
	  digit = temp % 10;
	  char_num = digit + '0';
	  print_char(char_num);
	  temp = temp / 10;
	}
    }
  else
    {
      while ( n > 0)
	{
	  temp = temp * 10;
	  temp = temp + n%10;
	  n = n / 10;
	}
      while ( temp > 0)
	{
	  digit = temp % 10;
	  char_num = digit + '0';
	  print_char(char_num);
	  temp = temp / 10;
	}
    }
}
