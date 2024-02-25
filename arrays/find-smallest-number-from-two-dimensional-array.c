// program to find largest element in an 2d array.

#include <stdio.h>
#include <conio.h>

void main()
{
  int a[3][3], i, j, min;
  printf("Enter array elements\n");
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("a[%d][%d]= ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      if (a[i][j] < min)
        min = a[i][j];
    }
  }
  printf("The minimum number = %d\n", min);
  getch();
}
