/*Function to print characters in upper case*/
char *uppercase_string(char *c)
{
  int i;
  for(i = 0; c[i] !='\0'; i++)
    {
      if ( c[i] >= 97 && c[i] <= 122)
	{
	  c[i] = c[i] - 32;
	}
    }
  return c;
}
