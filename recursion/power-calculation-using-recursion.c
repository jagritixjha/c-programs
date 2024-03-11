// Program to calculate the power of a number using recursion in C.

#include <stdio.h>
    int
    power(int base, int exponent)
{
  if (exponent == 0)
  {
    return 1;
  }
  return base * power(base, exponent - 1);
}

int main()
{
  int result = power(2, 4);
  printf("Power of 2 and 4: %d\n", result); // Output: Power: 16
  return 0;
}
