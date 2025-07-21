#include "stdio.h"

void evenNums(int n)
{
  if (n == 0)
    return;
  evenNums(n - 2);
  printf("%d ", n);
}

void evenNumsReverse(int n)
{
  if (n == 0)
    return;
  printf("%d ", n);
  evenNumsReverse(n - 2);
}

int main()
{
  int n;
  printf("enter n: ");
  scanf("%d", &n);

  evenNums(n * 2);
  printf("\n");
  evenNumsReverse(n * 2);
  return 0;
}