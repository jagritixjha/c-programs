#include "stdio.h"

int digitSum(int n)
{
  // int s;
  if (n == 0)
    return 0;
  // s = n % 10 + digitSum(n / 10);
  return (n % 10) + digitSum(n / 10);
}

int main()
{
  int a;
  printf("enter a num: ");
  scanf("%d", &a);
  printf("%d", digitSum(a));
  return 0;
}