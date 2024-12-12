#include <stdio.h>
#include <math.h>

int main()
{
  long int realNum, n, sum, r, digits;
  for (realNum = 1; realNum < 32000; realNum++)
  {
    n = realNum;
    sum = 0;
    digits = 0;

    while (n != 0)
    {
      n /= 10;
      digits++;
    }

    n = realNum;

    while (n != 0)
    {
      r = n % 10;
      sum += pow(r, digits);
      n /= 10;
    }

    if (sum == realNum)
    {
      printf("%ld\n", realNum);
    }
  }
  return 0;
}