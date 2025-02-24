#include "stdio.h"

int main()
{
  int a, b, c;
  printf("enter value of a: ");
  scanf("%d", &a);
  printf("enter value of b: ");
  scanf("%d", &b);
  printf("enter value of c: ");
  scanf("%d", &c);

  // if (a > b && a > c)
  // {
  //   printf("a is the greatest number\n");
  //   if (a == b || a == c)
  //   {
  //     printf("%d", a);
  //   }
  // }
  // else if (b > c)
  // {
  //   printf("b is the greatest number\n");
  //   if (b == a || b == c)
  //   {
  //     printf("%d", b);
  //   }
  // }
  // else
  // {
  //   printf("c is the greatest number\n");
  //   if (c == b || c == a)
  //   {
  //     printf("%d", c);
  //   }
  // }


  // another approach
  a > b ? printf(a > c ? "a is the greatest"
                       : "c is the greatest")
        : printf(b > c ? "b is the greatest" : "c is the greatest");
}
