#include "stdio.h"

void hcf(int a, int b) // (smaller num,bigger num)
{
  if (b == 0)
  {
    printf("hcf is %d", a);
    return;
  }
  hcf(b, a % b);
}

int main()
{
  int a = 492, b = 248;
  printf("enter num a and b: ");
  scanf("%d %d", &a, &b);

  if (a > b)
    hcf(a, b);
  else
    hcf(b, a);

  return 0;
}