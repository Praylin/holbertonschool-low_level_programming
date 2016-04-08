/*Find square root using recursion*/
int find_root(int n, int mid);
int square_root(int n){
  int mid = n/2;
  return find_root(n,mid);}
/*Find square root*/
int find_root(int n, int mid){
  int root = 0;
  if (n == 0)return 0;
  else if (n == 1)return 1;
  else if (n < 1)return -1;
  else{ if (mid * mid == n)
      root = mid;
    else if ((mid * mid) < n){
	mid = mid + 1;
	if (mid * mid == n)
	    root = mid;  
	else root = -1; }
   else{ mid = mid - 1;
      if ((mid * mid) == n)
	  root = mid;
      else{
	mid = mid/2;
       return find_root(n,mid); }}}
  return root;}

