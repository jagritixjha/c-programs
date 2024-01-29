#include <stdio.h>

int main()
{
  int i;
  printf("enter the no.");
  scanf("%d", &i);
  while (i <= 5)
  {
    printf("i = %d\n", i);
    i++;
  }
  printf("value of i outside the loop: %d", i);
  return 0;
}