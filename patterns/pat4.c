#include <stdio.h>
int i, j, space, k;

//     1
//    12
//   123
//  1234
// 12345

void case1(int n)
{
  space = n - 1;
  for (i = 1; i <= n; i++)
  {
    for (k = 1; k <= space; k++)
    {
      printf(" ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
    space--;
  }
}

void case2(int n)
{
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("Enter the no. of lines : ");
  scanf("%d", &n);

  // case1(n);
  case2(n);
  return 0;
}