#include <stdio.h>

int factorial(int n);

int main()
{
  int result = factorial(5);
  printf("Factorial: %d\n", result); // Output: Factorial: 120
  return 0;
}

// int factorial(int n)
// {
//   if (n == 0)
//   {
//     return 1;
//   }
//   return n * factorial(n - 1);
// }/

int factorial(int n) // alternative way
{
  if (n == 0)
  {
    return 1;
  }
  int factNm1 = factorial(n - 1);
  int factN = factNm1 * n;
  return factN;
}