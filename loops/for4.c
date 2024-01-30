#include <stdio.h>

int main()
{
  int i;
  for (i = 0; i <= 10; ++i)
  {
    printf("%d\n", i);
  }
  printf("Value of i outside the loop: %d", i);
  return 0;
}