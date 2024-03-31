//  Program to return the sum of two integers using a function and pointers in C.

#include <stdio.h>

int add(int *x, int *y)
{
  return (*x + *y);
}

int main()
{
  int a = 10, b = 50, ans;
  ans = add(&a, &b);
  printf("The addition of %d and %d is %d.\n", a, b, ans);
  return 0;
}