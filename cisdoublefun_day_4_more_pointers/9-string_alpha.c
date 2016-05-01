int string_alpha(char *s)
{
  int i, t;
  i = 0;
  t = 1;
  while(s[i] != '\0')
    {
      if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
	t = 1;
      else 
	{
	  t = 0;
	  break;
	}
      i++;
    }
  return t;
}
