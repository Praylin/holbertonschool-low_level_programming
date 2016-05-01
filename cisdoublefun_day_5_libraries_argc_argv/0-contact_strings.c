/*Function for strcat*/
char *concat_strings(char *dest, const char *src)
{
  int i, count = 0, j;
  for (i = 0; dest[i] != '\0' ; i++)
    {
      count++;
    }
  for (i = count, j = 0; src[j] != '\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  return dest;
}
