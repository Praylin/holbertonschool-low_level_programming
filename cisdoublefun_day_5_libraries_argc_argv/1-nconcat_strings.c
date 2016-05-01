/*Function for strncat*/
char *nconcat_strings(char *dest, const char *src, int n)
{
  int i, count = 0, j;
  for (i = 0; dest[i] != '\0' ; i++)
    {
      count++;
    }
  for (i = count, j = 0; j < n && src[j] != '\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  dest[count + i] = '\0';
  return dest;
}
