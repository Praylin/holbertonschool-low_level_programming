/*Print all the arguments*/
int print_char(char c);

int main(int argc, char *argv[])
{
  int i;
  int j;
  char *str;

  i = 0;
  j = 0;
  while (i < argc)
    {
      str = argv[i];
      j = 0;
      while (str[j] != '\0')
	{
	  print_char(str[j]);
	  j++;
	}
      print_char('\n');
      i++;
    }
  return (0);
}
