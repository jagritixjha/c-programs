#include "stdio.h"

int searchDigit(int num, int digit)
{
  while (num != 0)
  {
    if (num % 10 == digit)
      return 1;
    num /= 10;
  }
  return 0;
}

int main()
{
  int n, d;
  printf("enter n and digit to be searched: ");
  scanf("%d %d", &n, &d);

  searchDigit(n, d) ? printf("%d contains digit %d.", n, d) : printf("%d doesn't contains digit %d.", n, d);

  return 0;
}