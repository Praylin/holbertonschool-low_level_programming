int main (int argc, char *argv[])
{
  int num;
  int max;
  int i, j, k;

  k = 0;
 
   if (argc == 2)
     {
      num = *argv[1] - '0';
      max = num;
      for(j = 0; j < num/2; j++)
	{
	  for(k = 0; k < num/2; k++)
	    {
	      print_char('\\');
	      for(i = j; i < max; i++)
		print_char(' ');
	      print_char('/');
	      max = max - 1;
	      print_char('\n');
	    }
	}
     }
  return (0);
}
