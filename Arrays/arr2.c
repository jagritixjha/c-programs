// program to print sum of array elements,
// using a preprocessor directive to declare array size.

#include <stdio.h>
#define SIZE 60

int main()
{
  int arr[SIZE], sum = 0, i, n;

  printf("Enter the no. of elements: ");
  scanf("%d", &n);

  printf("Enter the values of elements:\n");
  for (i = 0; i <= n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("\nValues entered:\n");
  for (i = 0; i <= n; i++)
  {
    printf("a[%d] = %d\n", i, arr[i]);
  }

  printf("\nSum of elements: %d", sum);
  return 0;
}