#include "stdio.h"

void dTO(int a)
{
  if (a == 0)
    return;
  dTO(a / 8);
  printf("%d", a % 8);
}

int main()
{
  int a = 12;
  printf("enter a num: ");
  scanf("%d", &a);
  dTO(a);
  return 0;
}