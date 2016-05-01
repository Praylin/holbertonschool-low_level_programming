/*Convert string to lowercase*/
char *lowercase_string(char *s)
{
  int i;
  i = 0;
  while(s[i] != '\0')
    {
      if(s[i] >= 'A' && s[i] <= 'Z')
	s[i] = s[i] + 32;
      i++;
    }
  return s;
}
