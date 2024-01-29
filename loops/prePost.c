#include <stdio.h>

int main()
{
  int x = 1, y = 3, ans;

  ans = x++ + ++y + ++x + ++x;
  printf("The answer = %d\n", ans);

  x = 1;
  printf("%d %d %d %d", ++x, x++, --x, x--);

  return 0;
}