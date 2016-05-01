char *string_ncopy(char *dest, const char *src, int n)
{
  int i = 0;
  while(src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  while(i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return dest;
}
