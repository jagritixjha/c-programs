// program to store table of two number into an 2d array and print it.

#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int number);

int main()
{
  int table[2][10];
  storeTable(table, 0, 10, 2);
  storeTable(table, 1, 10, 3);
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d\t", table[i][j]);
    }
    printf("\n");
  }
  return 0;
}

void storeTable(int arr[][10], int n, int m, int number)
{
  for (int i = 0; i < m; i++)
  {
    arr[n][i] = number * (i + 1);
  }
}