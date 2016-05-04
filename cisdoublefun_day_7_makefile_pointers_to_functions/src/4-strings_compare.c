int strings_compare(char *s1, const char *s2);
int strings_compare(char *s1, const char *s2)
{
  int i;
  for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
      if(s1[i] > s2[i])
	return 15;
      else if(s1[i] < s2[i]) 
	return -15;
  return 0;
}      

