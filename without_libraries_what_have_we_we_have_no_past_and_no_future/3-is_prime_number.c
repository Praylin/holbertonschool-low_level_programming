/*Check whether a number is prime using recursion*/
int find_prime(int n, int num, int root);
int find_root(int n, int mid);
int square_root(int n);
int is_prime_number(int n){
  int num = 3;
  int root;
  root = square_root(n);
  if (root != -1)return 0;
  else if (n % 2 == 0)return 0;
  else if (n == 1)return 0;
  else return find_prime(n, num, root);}
int find_prime(int n, int num, int root){
  if (n / num == 0) return 0;
  else if ((num + 2) < root)
      find_prime(n,num+2,root);
  return 1;}
int square_root(int n){
  int mid = n/2;
  return find_root(n,mid);}
int find_root(int n, int mid){
  int root = 0;
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else if (n < 1) return -1;
  else {
    if (mid * mid == n) root = mid;
    else if ((mid * mid) < n){
	mid = mid + 1;
	if (mid * mid == n)
	    root = mid;  
	else root = -1;}
    else {
      mid = mid - 1;
      if ((mid * mid) == n)
	  root = mid;
      else {
	mid = mid/2;
       return find_root(n,mid);}}}
  return root;}
