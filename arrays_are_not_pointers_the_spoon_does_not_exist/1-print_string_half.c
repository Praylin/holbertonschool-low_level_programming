int print_char(char c);
/*prints half of a string*/
void print_string_half(char *str)
{
  int count = 0, i = 0;
  for( i = 0; str[i] != '\0'; i++)
    {
      count++;
    }
  if (count % 2 == 0)
    {
      for (i = count/2; str[i] != '\0' ; i++)
	print_char(str[i]);
    }
  else 
    {
      for (i = ((count-1)/2)+1; str[i] != '\0'; i++)
	print_char(str[i]);
    }
}
