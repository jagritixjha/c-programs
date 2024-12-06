#include <stdio.h>

int main()
{
  int i, l = 0, p = 1, c, ord;
  printf("Enter the order of series: ");
  scanf("%d", &ord);

  for (i = 1; i <= ord; i++)
  {
    c = l + p;
    printf("%d ", l);
    l = p;
    p = c;
  }
}