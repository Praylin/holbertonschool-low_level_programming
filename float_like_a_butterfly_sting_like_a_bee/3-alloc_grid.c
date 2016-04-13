#include <stdlib.h>
int **alloc_grid(int width, int height)
{
  int *arr = (int *)malloc(width * height * sizeof(int));
  arr[width][height] = {0};
  return arr;
}
