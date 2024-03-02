// Program demonstrating call by value and call by reference to square a number.

#include <stdio.h>

int square(int *n);
void _square(int n);

int main()
{
  int a = 4;
  _square(a); // call by value
  printf("number = %d\n", a);

  printf("square: %d\n", square(&a)); // call by reference
  printf("number = %d\n", a);
  return 0;
}

void _square(int n)
{
  n = n * n;
  printf("square: %d\n", n);
}

int square(int *n)
{
  *n = (*n) * (*n);
  return *n;
}