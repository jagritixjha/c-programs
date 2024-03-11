#include <stdio.h>
#include <math.h>
int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
void main()
{
  int n = 10;
  int result = fibonacci(n);
  printf("The %dth Fibonacci number is %d\n", n, result);
}
