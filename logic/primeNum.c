#include <stdio.h>

int main()
{
  int i, n, flag = 1;

  printf("Enter the no. : ");
  scanf("%d", &n);

  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      flag = 0;
    }
  }
  if (flag)
    printf("%d is a prime number!", n);
  else
    printf("%d is a composite number!", n);
  return 0;
}