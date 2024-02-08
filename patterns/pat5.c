#include <stdio.h>

//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

int main()
{
  int i, j, n;

  printf("Enter the no. of lines : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}