#include <stdio.h>
// diamond pattern

/*

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
 1 2 3 4 5     1 2 3 4 5
  1 2 3 4       1 2 3 4
   1 2 3         1 2 3
    1 2           1 2
     1             1

*/

int main()
{

  int n, i, j;
  printf("enter the number of lines : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
    {
      printf(" ");
    }
    for (j = 1; j <= i; j++)
    {
      // printf("%d ", j);
      printf("* ");
    }
    printf("\n");
  }

  for (i = 0; i < n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf(" ");
    }
    for (j = 1; j <= n - i; j++)
    {
      // printf("%d ", j);
      printf("* ");
    }
    printf("\n");
  }
}