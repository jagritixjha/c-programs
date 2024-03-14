#include <stdio.h>

int main()
{
  int a = 10, *b = &a;
  // a = 10;
  // b = &a;
  printf("\nThe value of a = %d and via b = %d", a, *b);
  printf("\nThe address of a = %u and via b = %u", &a, b);
  *b = 20;
  printf("\nThe value of a = %d and via b = %d", a, *b);
  printf("\nThe address of a = %u and via b = %u", &a, b);
  printf("\nThe address of b = %u", &b);
}