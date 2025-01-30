#include <stdio.h>

float sum(float, float);

int main()
{
  float a, b;
  printf("enetr the floating value of a: ");
  scanf("%f", &a);
  printf("enetr the floating value of b: ");
  scanf("%f", &b);
  printf("Sum of %.3f and %.3f is %.3f", a, b, sum(a, b));
}

float sum(float a, float b)
{
  return a + b;
}