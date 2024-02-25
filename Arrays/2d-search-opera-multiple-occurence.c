// program to print searched element and number of occurence of searched element in 2d array.

#include <stdio.h>
#define r 2
#define c 2

int main()
{
  int arr[r][c], i, j, srch, count = 0;

  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Enter the value to be searched : ");
  scanf("%d", &srch);

  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      if (srch == arr[i][j])
      {
        printf("Element %d found at arr[%d][%d]!\n", srch, i, j);
        count++;
      }
    }
  }

  if (count == 0) // count != 0
  {
    printf("Element %d not found!", srch);
  }
  else
  {
    printf("Total no. of occurence = %d", count);
  }
  return 0;
}