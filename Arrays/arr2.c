#include <stdio.h>
#define SIZE 60
int main()
{
  int arr[SIZE], i, sum = 0, n;

  printf("Enter the no. of elements: ");
  scanf("%d", &n);

  printf("Enter the values of elements:\n");
  for (i = 0; i <= n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("Values entered:\n");
  for (i = 0; i <= n; i++)
  {
    printf("a[%d] = %d\n", i, arr[i]);
  }

  printf("Sum of elements: %d", sum);
  return 0;
}