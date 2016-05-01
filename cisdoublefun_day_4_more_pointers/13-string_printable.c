/*checks if a string contains only printable characters*/
int string_printable(char *s)
{
  int i;
  int t;
  i = 0;
  t = 1;
  while(s[i] != '\0')
    {
      if(s[i] > 31 && s[i] < 127)
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
