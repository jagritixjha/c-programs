// Program to calculate the square of a number using a function by call by value.

#include <stdio.h>

// function declaration
int square(int n);

// main function
int main()
{
  int a = 4;
  int s = square(a); // call by value, In square(a) value inside () is called argument / ACTUAL PARAMETER.
  printf("square of %d is %d", a, s);
  return 0;
}

// function definition
int square(int n) // In function definition, variable declared inside () is called parameter / FORMAL PARAMETER.
{
  return n * n;
}