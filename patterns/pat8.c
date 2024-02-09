#include <stdio.h>

//      1
//     1 2
//    1   3
//   1     4
//  1       5
//  1       5
//   1     4
//    1   3
//     1 2
//      1

int main()
{

  int n, i, j, k;
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
      if (j == 1 || j == i)
      {

        printf("%d ", j);
      }
      else
      {
        printf("  "); // one space for replacing digit with space & another space for printing in the form of equilateral triangle
      }

      //   if (j == 1 || j == i)
      //   {
      //     if (j <= 9)
      //     {
      //       printf("%d ", j);
      //     }
      //     else
      //     {
      //       printf("%d", j);
      //     }
      //   }
      //   else
      //   {
      //     printf("  ");
      //   }
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
      if (j == 1 || j == n - i)
      {
        printf("%d ", j);
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