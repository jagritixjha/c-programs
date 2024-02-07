#include <stdio.h>

// 12345
// 1234
// 123
// 12
// 1

void case2(int n) // another approch
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
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

  case2(n);

  return 0;
}