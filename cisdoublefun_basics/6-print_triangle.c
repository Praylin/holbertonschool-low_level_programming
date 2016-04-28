int print_char(char c);
void print_triangle(int n)
{
  int i = 1;
  int j = 1;
  print_char('\n');
  while (i <= n)
    {
      while (j <= i)
	{
	  print_char('*');
	  j++;
	}
      print_char('\n');
      i++;
    }
  print_char('\n');
}
