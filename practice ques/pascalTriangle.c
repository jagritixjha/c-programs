#include <stdio.h>
int factorial(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
    f *= i;
  return f;
}

int combination(int n, int r)
{
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
  int n = 6;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      printf(" ");
    }
    // nC0 = 1
    int c = 1;
    for (int j = 1; j <= i; j++)
    {
      // The first value in a row is always 1
      printf("%2d ", c);
      c = c * (i - j) / j;
    }
    printf("\n");
  }

  /*  ANOTHER METHOD USING PATTERN, FACTORIAL, COMBINATION LOGIC
  for (int i = 0; i <= n; i++)
  {
    int r = 0;
    for (int j = 0; j <= n * 2; j++)
    {
      if ((j >= n * 2 / 2 - i) && (j <= n * 2 / 2 + i) || i == 6)
      {
        if ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))
        {
          printf("%d", combination(i, r));
          r++;
        }
        else
          printf(" ");
      }
      else
        printf(" ");
    }
    printf("\n");
  }
    */
}