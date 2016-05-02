/*Find substring*/
char *string_string(char *haystack, char *needle)
{
  int i = 0, j = 0, start = 0;
  char *res = needle;
  while((haystack[j] != '\0') && (i >= 0))
    {
      if(haystack[j] == needle[0])
	{
	  start = j;
	  while(needle[i] != '\0')
	    {
	      j++;
	      i++;
	      if(haystack[j] == needle[i])
		{
		}
	    }
	}
      else
	j++;
    } 
  i = 0;
  while(haystack[start] != '\0')
    {
      res[i] = haystack[start];
      i++;
      start++;
    }
  return res;
}
