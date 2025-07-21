// Program to check if a number is prime using a function to get input

#include <stdio.h>
int getInteger();

int main()
{
  int n, i, flag = 1;
  // no argument is passed

  n = getInteger();

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
  return 0;
}

// returns integer entered by the user
int getInteger()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  return n;
}