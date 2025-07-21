#include "stdio.h"

// increasing order
void printNums(int n)
{
  if (n == 0)
    return;
  printNums(n - 1);
  printf("%d ", n);
}

// decreasing order
void printNumsReverse(int n)
{
  if (n == 0)
    return;
  printf("%d ", n);
  printNumsReverse(n - 1);
}

int main()
{
  int n;
  printf("enter a number: ");
  scanf("%d", &n);

  printNums(n);
  printf("\n");
  printNumsReverse(n);
  return 0;
}