#include <stdio.h>

int main()
{

  // 123 ==> 321

  int n, i = 0, l = 0;
  printf("enter n: ");
  scanf("%d", &n);

  while (n != 0)
  {
    l = (l * 10) + (n % 10);
    n /= 10;
    i++;
  }

  printf("%d", l);

  return 0;
}
