#include <stdio.h>

int main()
{
  int i, n, sum, count = 0;
  for (n = 1; n < 10000; n++)
  {
    sum = 0; // reset
    for (i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        sum += i;
      }
    }
    if (sum == n)
    {
      count++;
      printf("%d\n", n);
    }
  }
  printf("Total counts of perfect numbers are %d", count);
  return 0;
}