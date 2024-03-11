#include <stdio.h>

int sum(int n);

int main()
{
  int number, result;
  printf("Enter a positive integer: ");
  scanf("%d", &number);
  result = sum(number);
  printf("sum = %d", result);
  return 0;
}

// int sum(int n)
// {
//   if (n != 0)
//   {
//     // sum() function calls itself
//     return n + sum(n - 1);
//   }
//   else
//   {
//     return n;
//   }
// }

int sum(int n) // alernative way
{
  if (n == 1)
  {
    return 1;
  }
  int sumN1 = sum(n - 1);
  int sumN = sumN1 + n;
  return sumN;
}
