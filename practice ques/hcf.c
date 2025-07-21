#include "stdio.h"

int main()
{
  int n, d, hcf = 1;
  printf("enter n and d : ");
  scanf("%d %d", &n, &d);

  for (int i = 2; n != 1 && d != 1; i++)
  {
    while (n % i == 0 && d % i == 0)
    {
      hcf *= i;
      n /= i;
      d /= i;
      printf("%d  ", i);
    }
  }
  printf("\nhcf is %d", hcf);
}