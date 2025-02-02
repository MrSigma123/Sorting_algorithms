// first attempt to write seletion sort
#include <stdio.h>
#include <limits.h>
#define SIZE 10
void selection_sort(int * source_arr, int * dest_arr, int size);
void copy_array(int * source_arr, int * dest_arr, int size);

int main(void)
{
  int i;
  int test_array[SIZE] = {4, 2, 6, 3, 5, 7, 1, 9, 8, 0};
  int sorted_array[SIZE]; // uninitialized
  selection_sort(test_array, sorted_array, SIZE);

  // display results
  printf("UNSORTED ARRAY:\n");
  for (i = 0; i < SIZE; i++)
  {
    printf("%d, ", test_array[i]);
  }
  printf("\nSORTED ARRAY:\n");
  for (i = 0; i < SIZE; i++)
  {
    printf("%d, ", sorted_array[i]);
  }

  return 0;
}

void selection_sort(int * source_arr, int * dest_arr, int size)
{
  // sort the results (implement own sorting algorithm)
  int i, j;
  int minimum = INT_MAX;
  int traced_element;
  int minimum_index;

  // copy the source array into destination array
  copy_array(source_arr, dest_arr, size);

  for (i = 0; i < size; i++)
  {
    minimum = INT_MAX;
    for (j = i; j < size; j++)
    {
      if(source_arr[j] < minimum)
      {
        minimum = source_arr[j];
        minimum_index = j;
      }
    }
    // swap the minimum and traced element
    traced_element = source_arr[i];
    dest_arr[i] = minimum;
    dest_arr[j] = traced_element;
  }
}

void copy_array(int * source_arr, int * dest_arr, int size) {
    for (int i = 0; i < size; i++) {

        // Copy each element one by one
        dest_arr[i] = source_arr[i];
    }
}
