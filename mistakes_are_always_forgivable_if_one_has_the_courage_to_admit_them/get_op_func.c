#include <stdio.h>

int op_add(int a,int b);
int op_sub(int a,int b);
int op_mul(int a,int b);
int op_div(int a,int b);
int op_mod(int a,int b);
int x;
int y;
int (*get_op_func(char c))(int x, int y)
{
  char arr[] = {'+', '-', '*', '/', '%'};
  int i;
  int (*func_arr[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
  for (i = 0; i < 5; i++)
    {
      if (c == arr[i])
	{
	  return (*func_arr[i]);
	}
    }
  return (0);
}
