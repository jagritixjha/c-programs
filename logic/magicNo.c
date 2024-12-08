#include <stdio.h>

int main()
{
  int n, n1, r, sum = 0;
  printf("Enter the no.: ");
  scanf("%d", &n);
  n1 = n;
  while (n != 0)
  {
    r = n % 10;
    sum += r;
    n /= 10;
    if (n == 0 && sum >= 10)
    {
      n = sum;
      sum = 0;
    }
  }
  if (sum == 1)
  {
    printf("%d is magical no.!", n1);
  }
  else
  {
    printf("%d is not a magical no.!", n1);
  }
  return 0;
}