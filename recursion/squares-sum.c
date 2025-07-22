#include "stdio.h"

int squareSums(int n)
{
  if (n == 1)
    return 1;
  return n * n + squareSums(n - 1);
}

int main()
{
  int a;
  printf("enter a num: ");
  scanf("%d", &a);

  printf("%d", squareSums(a));
  return 0;
}