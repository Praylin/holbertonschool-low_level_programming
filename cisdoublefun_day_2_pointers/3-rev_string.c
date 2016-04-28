/*Reverse a string by swapping elements*/
char *rev_string(char *str)
{
  char temp;
  int i = 0, mid = 0, count = 0, j = 0;
  /*Find length of string*/
  while(str[i] != '\0')
    {
      i++;
    }
  count = i - 1;
  mid = count/2;
  while(j < mid)
    {
      temp = str[count];      
      str[count] = str[j];
      str[j] = temp;
      j++;
      count--;
    }
  return str;
}
  
