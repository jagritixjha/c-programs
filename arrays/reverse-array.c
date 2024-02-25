// program to reverse an array using function.

#include <stdio.h>

void reverse(int arr[], int n);

int main()
{
  int i, n;
  printf("Enter the no. of elements of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of an array:\n");
  for (i = 0; i < n; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  reverse(arr, n);
  printf("\nReversed array:\n");
  for (i = 0; i < n; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}

void reverse(int arr[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    int firstval = arr[i];
    int secval = arr[n - i - 1];
    arr[i] = secval;
    arr[n - i - 1] = firstval;
  }
}
