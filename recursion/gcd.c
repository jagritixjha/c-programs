// Program to find the Greatest Common Divisor(GCD) of two numbers using recursion

#include <stdio.h>
int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

// Example usage
int main()
{
  int result = gcd(12, 18);
  printf("GCD of 12 and 18: %d\n", result); // Output: GCD: 6
  return 0;
}
