/*Check whether a string is palindrome or not by recursion*/
int find_count(int i, char *s);
int compare(int i, int j, int mid, int count, char *s);
int is_palindrome(char *s){
  int i = 0, j = 0;
  int count = 0, mid = 0;
  count = find_count(i, s);
  mid = count/2;
  i = count-1;
  return compare(i, j, mid, count, s);}
/*Find the length of string*/
int find_count(int i, char *s){
  if(s[i] != '\0'){
    i++;
    return  find_count(i, s);}
  return i;}
/*Compare the string from both sides*/
int compare(int i, int j, int mid, int count, char *s){
  if((i < count) && (i >= mid) && (j < mid) && (j >=0)){
      if(s[j] == s[i]){
	  i++;
	  j--;
	return compare(i, j, mid, count, s);}
      else return 0;}
  else return 1;}

