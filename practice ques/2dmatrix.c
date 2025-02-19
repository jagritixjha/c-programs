#include <stdio.h>

// Function to add two matrices
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

  // Input the elements of the first matrix
  printf("Enter elements of the first matrix (3x3):\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  // Input the elements of the second matrix
  printf("Enter elements of the second matrix (3x3):\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("a[%d][%d] = ", i, j);

      scanf("%d", &mat2[i][j]);
    }
  }

  // display matrix in table form:
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

  // Call the function to add matrices
  addMatrices(mat1, mat2, result);

  // Display the result matrix
  printf("Resultant matrix (sum of matrices a and b):\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
