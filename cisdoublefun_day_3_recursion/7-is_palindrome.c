/*Check whether a string is palindrome or not*/
int find_len(char *s);
int compare(int i,char *s, int mid, int count);
int is_palindrome(char *s)
{
  int len, begin, end;
  len = find_len(s);
  begin = 0;
  end = len-1;
  return compare(len,s,begin,end);
}
  
int find_len(char *s)
{
  int i = 0;
  while(s[i] != '\0')
    i++;
  return i;
}

int compare(int len, char *s, int begin, int end)
{
  if((s[begin] == s[end]) && (begin < end))
    {
      return 1;
    }
  else if(s[begin] != s[end])
    return 0;
  return compare(len,s,begin++,end--);
}
    
    


  
