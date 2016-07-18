#include<stdio.h>
void sort(int *array, int first, int last);
void quick_sort(int *array, int size) {
  sort(array, 0, size-1);
}
void sort(int *array, int first, int last) {
  int pivot,i, count = 1;
  int temp;
  while(first < last) {
    /* printf("%d %d\n", first, last);*/
    pivot = array[first];
    for(i = 2; i <= last; i++) { 
      if (pivot > array[i]) {
	temp = array[i];
	array[i] = array[count];
	array[count] = temp;
	count++;
      }
    }
    temp = array[0];
    array[0] = array[count - 1];
    array[count - 1] = temp;
  }
}
