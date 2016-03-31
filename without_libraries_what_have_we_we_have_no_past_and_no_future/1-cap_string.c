/*Function to capitalize the first letter of each word*/
char *cap_string(char *s)
{
  int i;
  for(i = 0; s[i] != '\0'; i++)
    {
      if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
	  if(s[i+1] >= 97 && s[i+1] <= 122)
	    s[i+1] = s[i+1] - 32;
	}
    }
  return s;
}
