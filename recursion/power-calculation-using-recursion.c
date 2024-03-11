#include <stdio.h>
int power(int base, int exponent)
{
  if (exponent == 0)
  {
    return 1;
  }
  return base * power(base, exponent - 1);
}
// Example usage
int main()
{
  int result = power(2, 4);
  printf("Power: %d\n", result); // Output: Power: 16
  return 0;
}
