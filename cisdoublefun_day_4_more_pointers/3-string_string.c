/*Find substring*/
char *string_string(const char *haystack, const char *needle)
{
  int i = 0, j = 0;
  const char *result;
  while(haystack[i] != '\0')
  {
    while (needle[j] != '\0') 
      {
	if(needle[j] == haystack[i])
	  {
	    j++;
	    i++;
	  }
	else
	  return ('\0');
      }
    i++;
  }
  result = haystack;
  return result;
}
