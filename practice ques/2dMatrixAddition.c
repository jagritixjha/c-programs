#include <stdio.h>

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

int main()
{
  int mat1[3][3], mat2[3][3], result[3][3];

  printf("Enter elements of the first matrix (3x3):\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter elements of the second matrix (3x3):\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("a[%d][%d] = ", i, j);

      scanf("%d", &mat2[i][j]);
    }
  }

  printf("Enterd matrix A:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", mat1[i][j]);
    }
    printf("\n");
  }

  printf("Enterd matrix b:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }

  addMatrices(mat1, mat2, result);

  printf("Resultant matrix (sum of matrices a and b):\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
