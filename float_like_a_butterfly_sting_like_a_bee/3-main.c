#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int, int);
void print_grid(int **, int, int);
void print_grid(int **grid, int m, int n)
{
  int i,j;
  for(i = 0; i < m; i++)
    {
      for(j = 0; j < n; j++)
	{
	  printf("%d",grid[i][j]);
	  printf(", ");
        }
      printf("\n");
    }
}
int main()
{
  int **grid;

  grid = alloc_grid(5, 5);
  print_grid(grid, 5, 5);
  printf("\n");
  grid[2][3] = 98;
  grid[4][4] = 402;
  print_grid(grid, 5, 5);
  return (0);
}
