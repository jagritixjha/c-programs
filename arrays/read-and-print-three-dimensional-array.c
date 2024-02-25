// program to take 3d array elements from user and print it.

#include <stdio.h>
int main()
{
  int i, j, k, a[2][3][2];
  printf("Enter values of array a : \n");

  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        printf("a[%d][%d][%d] = ", i, j, k);
        scanf("%d", &a[i][j][k]);
      }
    }
  }

  printf("\nDisplaying values:\n");
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
      }
    }
  }
  return 0;
}