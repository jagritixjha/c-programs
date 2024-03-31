//  Program to calculate the sum of an array's elements using pointers.

#include <stdio.h>

void sum(int *p, int size)
{
  int tot = 0, i;
  for (i = 0; i < size; i++)
  {
    printf("%d ", *(p + i));
    tot += *(p + i);
  }
  printf("\nTotal = %d", tot);
}

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(a) / sizeof(a[0]);
  sum(&a[0], size);
  return 0;
}