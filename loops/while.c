#include <stdio.h>

int main()
{
  int i, n;
  printf("enter the no.");
  scanf("%d", &n);
  i = 0;
  while (i <= n)
  {
    printf("i = %d\n", i);
    i++;
  }
  printf("value of i outside the loop: %d", i);
  return 0;
}