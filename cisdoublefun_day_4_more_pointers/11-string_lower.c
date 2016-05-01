/*checks if a string contains only lower-case alphabetical characters*/
int string_lower(char *s)
{
  int i;
  int t;
  i = 0;
  t = 1;
  while(s[i] != '\0')
    {
      if(s[i] >= 'a' && s[i] <= 'z')
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
