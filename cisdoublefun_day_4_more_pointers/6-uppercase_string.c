char *uppercase_string(char *s)
{
  int i;
  i = 0;
  while (s[i] != '\0')
    {
      if((s[i] >='a') && (s[i] <='z'))
	{
	  s[i] = s[i] - 32;
	}
      i++;
    }
  return s;
}
