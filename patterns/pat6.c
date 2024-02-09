#include <stdio.h>
// full pyramid

/*
      1
     123
    12345
   1234567
  123456789
*/

int main()
{
  int i, j, n;
  n = 5;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
    {
      printf(" ");
    }

    for (j = 1; j <= (2 * i - 1); j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}