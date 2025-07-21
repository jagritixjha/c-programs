#include "stdio.h"

int checkPrimeNumber(int n)
{
  if (n < 2)
    return 0;

  for (int i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  // int n, m;
  // printf("enter a num: ");
  // scanf("%d %d", &n, &m);

  // next prime number
  // n++;
  // while (!checkPrimeNumber(n))
  // {
  //   n++;
  // }
  // printf("%d", n);

  // prime numbers between n and m
  // for (int i = n; i <= m; i++)
  // {
  //   if (checkPrimeNumber(i))
  //   {
  //     printf("%d ", i);
  //   }
  // }

  // first n prime numbers
  // for (int i = 2; i <= m; i++)
  // {
  //   if (checkPrimeNumber(i))
  //   {
  //     printf("%d ", i);
  //   }
  // }

}