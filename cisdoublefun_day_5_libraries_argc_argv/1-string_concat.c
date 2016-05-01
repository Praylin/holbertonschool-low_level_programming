/*strcat*/
char *string_concat(char *dest, const char *src)
{
  int i, j;
  i = 0;
  while(dest[i] != '\0')
    {
      i++;
    }
  j = i;
  i = 0;
  while(src[i] != '\0')
    {
      dest[j] = src[i];
      j++;
      i++;
    }
  return dest;
}
