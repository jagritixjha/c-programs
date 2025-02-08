// wap to identify if the number is perfect number or not.

#include <stdio.h>

int main()
{
  int num, i, sum = 0;

  printf("Enter the number : ");
  scanf("%d", &num);

  for (i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  if (sum == num && num > 0)
  {
    printf("The number %d is perfect number!", num);
  }
  else
  {
    printf("The number %d is not perfect number!", num);
  }
  return 0;
}