/*Compare 2 strings*/
int strings_compare(char *s1, const char *s2)
{
  int i;
  i = 0;
  while((s1[i] != '\0') && (s1[i] == s2[i]))
    {
      i++;
    }
  if(s1[i] == s2[i])
    return 0;
  return (s1[i] - s2[i]);
}
