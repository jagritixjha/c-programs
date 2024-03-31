//  Program to add two integers using pointers in C.

#include <stdio.h>

int main()
{
  int a, b, *x, *y;
  x = &a;
  y = &b;

  a = 10;
  b = 70;
  printf("The addition of %d and %d is %d", *x, *y, (*x + *y));
  return 0;
}