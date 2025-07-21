#include "stdio.h"

int evenSum(int a)
{
  if (a <= 1)
    return 0;
  return a + evenSum(a - 2);
}

int main()
{
  int a = 5;
  printf("enter n: ");
  scanf("%d", &a);
  printf("%d", evenSum(2 * a));
  return 0;
}