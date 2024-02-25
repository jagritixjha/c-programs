//  program to print total number of odd elements in an array a an array.

#include <stdio.h>

void printOdd(int n, int a[]);

int main()
{
  int a[50], i, n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  printOdd(n, a);
  return 0;
}

void printOdd(int n, int a[])
{
  int p = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 != 0)
    {
      p++;
    }
  }
  printf("Number of odd elements in the array: %d\n", p);
}