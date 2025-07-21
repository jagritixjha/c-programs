// Write a function to calculate the number of combinations one can make from n items and r selected at a time.(TSRS)

#include "stdio.h"

int factorial(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  return f;
}

int combination(int n, int r)
{
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
  int n, r;
  printf("enter n: ");
  scanf("%d", &n);
  printf("enter r: ");
  scanf("%d", &r);

  if (n < r)
    printf("please enter n>=r>=0 ");
  else
    printf("%d", combination(n, r));

  return 0;
}