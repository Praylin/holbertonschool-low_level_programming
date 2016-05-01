/*checks if a string contains only digits*/
int string_digit(char *s)
{
  int i;
  int t;
  i = 0;
  t = 1;
  while(s[i] != '\0')
    {
      if(s[i] >= '0' && s[i] <= '9')
	{
	  t = 1;
	}
      else
	{
	  t = 0;
	  break;
	}
      i++;
    }
  return t;
}
