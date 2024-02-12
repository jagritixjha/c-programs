#include <stdio.h>

void printArray(int *arr[], int n);

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 10;
  printArray(arr, n);
  return 0;
}

void printArray(int *arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}
