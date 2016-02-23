void print_square(int n)
{
  int i, j;
  if (n >0)
    {
      if (n == 1)
	{
	  print_char('o');
	  print_char('\n');
	}
      else if (n == 2)
	{
	  for(i = 0; i < 2; i++)
	    {
	      print_char('o');
	      print_char('o');
	      print_char('\n');
	    }
	}
      else
	{
	  print_char('o');
	  for(i = 0; i < (n-2); i++)
	    {
	      print_char('-');
	    }
	  print_char('o');
	  print_char('\n');
	  for(i = 0; i < (n-2); i++)
	    {
	      print_char('|');
	      for(j = 0; j < (n-2); j++)
		{
		  print_char(' ');
		}
	      print_char('|');
	      print_char('\n');
	    }
	  print_char('o');
	  for(i = 0; i < (n-2); i++)
	    {
	      print_char('-');
	    }
	  print_char('o');
	  print_char('\n');
       }
    }
}
