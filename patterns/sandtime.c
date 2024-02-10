#include <stdio.h>

//    1 2 3 4 5 6
//     1       5
//      1     4
//       1   3
//        1 2
//         1
//         1
//        1 2
//       1   3
//      1     4
//     1       5
//    1 2 3 4 5 6

int main()
{

  int n, i, j, k;
  printf("enter the number of lines : ");
  scanf("%d", &n);

  for (i = n; i >= 1; i--)
  {
    for (j = n - i; j >= 1; j--)
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)
    {

      if (j == 1 || j == i || i == n)
      {
        printf("* ", j);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)
    {

      if (j == 1 || j == i || i == n)
      {
        printf("* ", j);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}