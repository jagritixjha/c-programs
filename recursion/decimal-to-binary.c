#include "stdio.h"

// using & (and), >> (right shift) operator
void dtob(int a)
{
  if (a == 0)
    return;

  dtob(a >> 1);
  printf("%d", a & 1);
}

// using % (mod), / (division) operator
void dtobi(int a)
{
  if (a == 0)
    return;

  dtobi(a / 2);
  printf("%d", a % 2);
}

int main()
{
  int a = 12;
  printf("enter a num: ");
  scanf("%d", &a);
  dtob(a);
  printf("\n");
  dtobi(a);
  return 0;
}