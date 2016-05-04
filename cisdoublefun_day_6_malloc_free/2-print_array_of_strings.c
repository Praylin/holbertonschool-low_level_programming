#define NULL 0
int print_char(char c);
void print_array_of_strings(char **a)
{
  int i;
  int j;
  char *string;
  
  i = 0;
  j = 0;
  while(a[i] != NULL)
    {
      string = a[i];
      while(string[j] != '\0')
	{    
	  print_char(string[j]);
	  j++;
	}
j = 0;
      print_char(' ');
      i++;
    }
  print_char('\n');
}
