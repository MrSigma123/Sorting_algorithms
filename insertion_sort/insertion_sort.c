// first attempt to write insertion sort
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int * source_arr, int * dest_arr, int size);

int main(void)
{
  int n;
  int i;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int * source = (int*)malloc(sizeof(int) * n);
  int * dest = (int*)malloc(sizeof(int) * n);

  // scan the input array
  for (i = 0; i < n; i++)
  {
    scanf("%d", &source[i]);
  }

  // call the insertioin sort
  insertion_sort(source, dest, n);

  // display the results before sorting
  printf("BEFORE SORTING:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d, ", source[i]);
    if (i == n - 1)
    {
      printf("%d", source[i]);
    }
  }

  // display the results before sorting
  printf("\nAFTER SORTING:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d,", dest[i]);
    if (i == n - 1)
    {
      printf("%d", dest[i]);
    }
  }

  free(source);
  free(dest);

  return 0;
}

void insertion_sort(int * source_arr, int * dest_arr, int size)
{
  // TODO: implement insertion sort
}

