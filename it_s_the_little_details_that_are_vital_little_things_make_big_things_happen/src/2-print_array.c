int print_char(char c);
/*prints each element of an array of integers*/
void print_array(int *a, int n)
{
  int i = 0, temp = 0, digit = 0;
  char char_num;
  for (i = 0; i < n; i++)
    {
      /*temp = *(a[i]) + '0';
      printf("%d",a[i]);*/
       while ( a[i] > 0)
	{
	  temp = temp * 10;
	  temp = temp + a[i]%10;
	  a[i] = a[i] / 10;
	}
       while ( temp > 0)
	{
	  digit = temp % 10;
	  char_num = digit + '0';
	  print_char(char_num);
	  temp = temp / 10;
	}
       if(i <= 3)
        {
           print_char(',');
           print_char(' ');
        }
       else
	 print_char('\n');
    }
}
