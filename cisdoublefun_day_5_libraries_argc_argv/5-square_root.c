/*Square root of a number using recursion*/
int find_root(int x, int n);
int square_root(int n)
{
  int x;
  /*int sqr_root;*/
  x = n - 1;
  if ((n == 0) || (n == 1))
    return n;
  else if(n < 0)
    return -1;
  /*sqr_root = find_root(x,n);*/
  return find_root(x,n);
}

int find_root(int x, int n)
{
  if((x*x) == n)
    {
      return x;
    }
  else if (x == 0)
    return -1;
  return (find_root((x-1),n));
}
