// first attempt to write insertion sort
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int * source_arr, int * dest_arr, int size);

int main(void)
{
  int size;
  int i;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  int * source = (int*)malloc(sizeof(int) * size);
  int * dest = (int*)malloc(sizeof(int) * size);

  // scan the input array
  for (i = 0; i < size; i++)
  {
    scanf("%d", &source[i]);
  }

  return 0;
}

void insertion_sort(int * source_arr, int * dest_arr, int size)
{

}

