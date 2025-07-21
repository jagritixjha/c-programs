// Write a function to calculate the factorial of a number.(TSRS)

#include "stdio.h"

    int factorial(int n){
  int f=1;
  for (int i = 2; i <= n; i++)
  {
    f *= i;
  }
  return f;
}


int main()
{
  // int n;
  // printf("enter num: ");
  // scanf("%d", &n);

  // printf("%d", factorial(n));

  int sum = 0;
  for (int i = 1; i <=5; i++)
  {
    sum += factorial(i) / i;
  }
  printf("%d ", sum);

  return 0;
}