/* first number contained in a string*/
int string_to_integer(char *s)
{
  int i = 0, sign = 0, word = 0;
  long num = 0;
  while (s[i]!='\0')
    {
if(s[i] == '-')          /* Count the number of -ve sign */
	{
	  sign++;
	  i++;
	}
 else if (s[i] < '0' || s[i] > '9')  /*Characters other than numbers*/
	{
	  if(word == 1)
	    break;
	  else
	    i++;
	}
 else /* Characters which are numbers */
	{
	  num = 10 * num + (s[i]-48);
	  word = 1;
	  i++;
	}
    }
  if(sign % 2 == 1)
    num = -1 * num;
  if (num > 2147483647 || num < -2147483648) 
    {
      num=0;
    }
  return ((int)num);
}
    
    
