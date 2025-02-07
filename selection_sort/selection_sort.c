// first attempt to write seletion sort
#include <stdio.h>
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
    if (i < SIZE - 1)
    {
      printf("%d, ", test_array[i]);
    }
    else
    {
      printf("%d\n", test_array[i]);
    }
  }
  printf("\nSORTED ARRAY:\n");
  for (i = 0; i < SIZE; i++)
  {
    if (i < SIZE - 1)
    {
      printf("%d, ", sorted_array[i]);
    }
    else
    {
      printf("%d\n", sorted_array[i]);
    }
  }

  return 0;
}

void selection_sort(int * source_arr, int * dest_arr, int size)
{
  // sort the results (implement own sorting algorithm)
  int i, j, x;
  int traced_element;
  int minimum_index;

  // copy the source array into destination array
  copy_array(source_arr, dest_arr, size);

  for (i = 0; i < size; i++)
  {
    minimum_index = i;
    for (j = i + 1; j < size; j++)
    {
      if(dest_arr[j] < dest_arr[minimum_index])
      {
        minimum_index = j;
      }
    }
    // swap the minimum and traced element
    traced_element = dest_arr[i];
    dest_arr[i] = dest_arr[minimum_index];
    dest_arr[minimum_index] = traced_element;
  }
}

void copy_array(int * source_arr, int * dest_arr, int size) {
    for (int i = 0; i < size; i++) {

        // Copy each element one by one
        dest_arr[i] = source_arr[i];
    }
}
