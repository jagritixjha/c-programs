// Program to determine if an entered number is prime using functions.
#include <stdio.h>
void checkPrimeNumber();

int main()
{
  checkPrimeNumber();
  return 0;
}

void checkPrimeNumber()
{
  int n, i, flag = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  }

  if (flag)
  printf("%d is a prime number.", n);
  else
  printf("%d is not a prime number.", n);
}