#include <stdio.h>

int main()
{
  int n, i, flag, count = 0;
  for (n = 2; n < 2000; n++)
  {
    flag = 1;
    for (i = 2; i < n; i++)
    {
      if (n % i == 0)
      {
        // printf("%d\n", i);
        flag = 0;
        break;
      }
    }
    if (flag)
    {
      count++;
      printf("%d\n", n);
    }
  }
  printf("total no. of prime are %d.", count);
  return 0;
}