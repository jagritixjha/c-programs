// Program to Calculate the Sum of Squares of Two Integers Using Macros.

#include <stdio.h>
#define SQR(x) ((x) * (x))
#define X2Y2(x, y) (SQR(x) + SQR(y))

int main()
{
  int a, b;
  printf("Enter a and b: ");
  scanf("%d %d", &a, &b);
  printf("sqr(a) + sqr(b): %d", X2Y2(a, b));
  return 0;
}
