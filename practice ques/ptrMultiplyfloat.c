#include <stdio.h>

int main()
{
  float num1, num2, *a = &num1, *b = &num2;
  printf("enetr the floating value of a: ");
  scanf("%f", a);
  printf("enetr the floating value of b: ");
  scanf("%f", b);
  printf("multiplication of %.3f and %.3f is %.3f", *a, *b, *a * *b);
}