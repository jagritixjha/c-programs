#include <stdio.h>
#define r 2
#define c 2

void search(int[][c], int);

int main()
{
  int arr[r][c], i, j, srch;

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

  search(arr, srch);
  return 0;
}

void search(int arr[][c], int srch_ele)
{
  int i, j, count = 0;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      if (srch_ele == arr[i][j])
      {
        printf("Element %d found at arr[%d][%d]!\n", srch_ele, i, j);
        count++;
      }
    }
  }

  if (count == 0) // count != 0
  {
    printf("Element %d not found!", srch_ele);
  }
  else
  {
    printf("Total no. of occurence = %d", count);
  }
}