#include <stdio.h>

int main()
{
  int n, i, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }

  if (sum == n && n > 0)
  {
    printf("The no. %d is perfect number!", n);
  }
  else
  {
    printf("The no. %d is not perfect number!", n);
  }
  return 0;
}