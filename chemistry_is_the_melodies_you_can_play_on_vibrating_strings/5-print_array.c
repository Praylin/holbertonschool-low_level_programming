int print_char(char c);
/*prints each element of an array of integers*/
void print_array(int *a, int n)
{
  int i = 0, temp = 0, digit = 0, num = 0;
  char char_num;
  for (i = 0; i < n; i++)
    {
      num = a[i];
      if(num == 0 && i < n-1)
	{
	  print_char(0 + '0');
	  print_char(',');
	  print_char(' ');
	}
      else if(num == 0 && i == n-1)
	{
	  print_char(0 + '0');
	  print_char('\n');
	}
      else
	{
	  while (num > 0)
	    {
	      temp = temp * 10;
	      temp = temp + num%10;
	      num = num / 10;
	    }
	  while ( temp > 0)
	    {
	      digit = temp % 10;
	      char_num = digit + '0';
	      print_char(char_num);
	      temp = temp / 10;
	    }
	  if(i < n-1)
	    {
	      print_char(',');
	      print_char(' ');
	    }
	  else
	    print_char('\n');
	}
    }
}
