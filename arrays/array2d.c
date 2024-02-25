// program to take input as 2d array & print that 2d array, use preprocessor directive for array size.

#include <stdio.h>
#define r 3
#define c 3

int main()
{
  int arr[r][c], i, j;

  printf("Enter the elements:\n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("\nElements entered:\n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}