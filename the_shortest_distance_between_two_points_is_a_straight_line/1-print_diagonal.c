/* function that draws a diagonal line on the terminal*/
int print_char(char c);
void print_diagonal(int n)
{
  int i = 0,j;
  if( n <= 0)
    {
      print_char('\n');
    }
  else if (n == 1)
    {
      print_char('\\');
      print_char('\n');
    }
  else
    {
      for(i = 0; i < n; i++)
	{
	  for(j = 0; j < i; j++)
	    {
	      print_char(' ');
	    }
	  print_char('\\');
	  print_char('\n');
	}
    }
}
