// wap to print the sum of all the even and odd elements separately from an array.
#include "stdio.h"

int main()
{
  int a[10] = {}, evenSum = 0, oddSum = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("enter a[%d] : ", i);
    scanf("%d", &a[i]);
    if (a[i] % 2 == 0)
      evenSum += a[i];
    else
      oddSum += a[i];
  }

  printf("\n%d", evenSum);
  printf("\n%d", oddSum);
  return 0;
}