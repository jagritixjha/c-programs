#include <stdio.h>

void add(int *x, int *y)
{
  printf("The addition of %d and %d is %d.\n", *x, *y, (*x + *y));
}

int main()
{
  int a = 10, b = 50;
  add(&a, &b); // call by reference as the address is passed
  return 0;
}