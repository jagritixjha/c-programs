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
  printf("2227010701049\n");
  printf("GCD: %d\n", result); // Output: GCD: 6
  return 0;
}
