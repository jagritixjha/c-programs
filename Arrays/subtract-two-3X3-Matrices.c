// program to print subtraction of two sx3 matrix.

#include <stdio.h>
#define s 2

int main()
{
  int a[s][s], b[s][s], c[s][s], i, j;
  printf("Enter element of matrix A:\n");
  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter element of matrix B:\n");
  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      printf("b[%d][%d] = ", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  printf("Entered mateix A:\n");
  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("Entered mateix B:\n");
  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }

  printf("Subtraction of two dimensional array a and b:\n");
  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
