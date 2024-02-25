//  program to print largest element, smallest element, sum of all elements & average of array.

#include <stdio.h>
#define size 60

int main()
{
  int a[size], i, n, sum, largest, smallest;

  printf("Enter the no. elements: ");
  scanf("%d", &n);

  printf("Enter values of elements:\n");
  for (i = 1; i <= n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  sum = 0;
  largest = smallest = a[1];

  for (i = 1; i <= n; i++)
  {
    if (largest < a[i])
    {
      largest = a[i];
    }
    if (smallest > a[i])
    {
      smallest = a[i];
    }
    sum += a[i];
  }
  printf("The largest = %d, smallest = %d and avg = %.2f", largest, smallest, (float)sum / n);
  return 0;
}