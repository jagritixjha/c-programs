#include "stdio.h"

int hcf(int a, int b)
{
  if (a % b == 0)
    return b;
  if (a > b)
  {
    hcf(a % b, b);
  }
  else
    hcf(a, b % a);
}

int main()
{
  int a, b;
  printf("enter num a and b: ");
  scanf("%d %d", &a, &b);
  printf("hcf is %d", hcf(a, b));
  return 0;
}