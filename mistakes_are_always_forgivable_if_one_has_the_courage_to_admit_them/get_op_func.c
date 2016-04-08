int op_add(int,int);
int op_sub(int,int);
int op_mul(int,int);
int op_div(int,int);
int op_mod(int,int);
/*int (*func_arr[](char c))(int x, int y) = {op_add, op_sub, op_mul, op_div, op_mod};*/
int (*get_op_func(char c))(int x, int y)
{
  char arr[] = {'+', '-', '*', '/', '%'};
  int i;
  int (*func_arr[])(int x, int y) = {op_add, op_sub, op_mul, op_div, op_mod};
  for (i = 0; i < 5; i++)
    {
      if (c == arr[i])
	return (*func_arr[i])(int x,int y);
    }
}