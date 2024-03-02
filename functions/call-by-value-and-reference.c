// Program to calculate the sum, product, and average of two numbers using pointers.
#include <stdio.h>

void dowork(int x, int y, int *sum, int *prod, int *avg);

int main()
{
  int a = 5, b = 5;
  int sum, prod, avg;
  dowork(a, b, &sum, &prod, &avg);
  printf("Sum = %d\nProduct = %d\nAverage = %d", sum, prod, avg);
  return 0;
}

void dowork(int x, int y, int *sum, int *prod, int *avg)
{
  *sum = x + y;
  *prod = x * y;
  *avg = (x + y) / 2;
}