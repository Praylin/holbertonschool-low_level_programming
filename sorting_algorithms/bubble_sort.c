/*Bubble Sort*/
void bubble_sort(int *array, int size)
{
  int i, j;
  int temp;
  for(j = 0; j < size; j++, size--) {
    for(i = 0; i < size-1; i++) {
      if(array[i] > array[i+1]) {
	temp = array[i];
	array[i] = array[i+1];
	array[i+1] = temp;
      }
    }
  }
}
      
