#include "stdio.h"

int oddSum(int n)
{
  if (n <= 1)
    return 1;
  
  return (2 * n) - 1 + oddSum(n - 1);
}

int main()
{
  int a = 5;
  // printf("enter num: ");
  // scanf("%d", &a);
  printf("%d", oddSum(a));
  return 0;
}