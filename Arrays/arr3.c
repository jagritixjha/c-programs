#include <stdio.h>
#define size 60

int main()
{
  int a[size], i, n, sum, max, min;

  printf("Enter the no. elements: ");
  scanf("%d", &n);

  printf("Enter values of elements:\n");
  for (i = 1; i <= n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  sum = 0;
  max = min = a[1];

  for (i = 1; i <= n; i++)
  {
    if (max < a[i])
    {
      max = a[i];
    }
    if (min > a[i])
    {
      min = a[i];
    }
    sum += a[i];
  }
  printf("The max = %d, min = %d and avg = %.2f", max, min, (float)sum / n);
  return 0;
}