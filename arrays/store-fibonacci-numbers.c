// program to store and print fibonacci number into an array.

#include <stdio.h>

void fib(int n, int arr[]);

int main()
{
  int n;
  printf("Enter total no. of fibonacci no. u want to store: ");
  scanf("%d", &n);
  int fibonacci[n];
  fib(n, fibonacci);
  return 0;
}

void fib(int n, int arr[])
{
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < n; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2]; // imp formula
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
}