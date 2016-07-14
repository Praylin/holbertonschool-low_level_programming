/*Insertion Sort*/
void insertion_sort(int *array, int size)
{
  int i, j;
  int temp;
  for(i = 0; i < size-1; i++) {
    if(array[i] > array[i+1]) { 
      temp = array[i];
      array[i] = array[i+1];
      array[i+1] = temp;
      }
    if(i > 1) {
      for(j = i; j > 0; j--) {
	if(array[j-1] > array[j]) { 
	  temp = array[j-1];
	  array[j-1] = array[j];
	  array[j] = temp;
        }
      }
    }      
  }
}

