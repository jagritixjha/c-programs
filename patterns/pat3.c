#include <stdio.h>

//   54321
//   4321
//   321
//   21
//   1

int main()
{
  int i, j, n;

  printf("Enter the no. of lines : ");
  scanf("%d", &n);

  for (i = n; i >= 1; i--)
  {
    for (j = 5; j >= 1; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}