/*checks if a string contains only upper-case alphabetical characters*/
int string_upper(char *s)
{
  int i;
  int t;
  i = 0;
  t = 1;
  while(s[i] != '\0')
    {
      if(s[i] >= 'A' && s[i] <= 'Z')
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
