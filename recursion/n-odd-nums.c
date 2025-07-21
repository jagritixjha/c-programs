#include "stdio.h"

void oddNums(int n)
{
  if (n <= 0)
    return;
  oddNums(n - 2);
  printf("%d ", n);
}

void oddNumsReverse(int n)
{
  if (n <= 0)
    return;
  printf("%d ", n);
  oddNumsReverse(n - 2);
}

int main()
{
  int n;
  printf("enter n: ");
  scanf("%d", &n);

  oddNums(2 * n - 1);
  printf("\n");
  oddNumsReverse(2 * n - 1);
  return 0;
}