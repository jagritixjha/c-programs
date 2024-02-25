// program to take 2d array elements from user and print it.
#include <stdio.h>

int main()
{
  int a[2][3], i, j;
  printf("Enter element of 2x3 array a:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nEntered element of two dimensional array a:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}