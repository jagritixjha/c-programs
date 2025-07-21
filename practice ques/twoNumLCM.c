#include <stdio.h>

int main()
{
  int n, d;
  printf("enter n and d : ");
  scanf("%d %d", &n, &d);

  for (int i = 1; i <= n * d; i++)
  {
    if ((i % n == 0) && (i % d == 0))
    {
      printf("lcm is %d", i);
      break;
    }
  }

  return 0;
}