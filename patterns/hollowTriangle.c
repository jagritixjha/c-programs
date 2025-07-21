#include "stdio.h"

int main()
{

  int n;
  printf("enter n: ");
  scanf("%d", &n);

  for (int i = 0; i < n+1 ; i++)
  {
    for (int j = 0; j < n*2+1; j++)
    {
      if (j == n - i || j == n + i || i == n)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}