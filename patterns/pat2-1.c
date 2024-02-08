#include <stdio.h>

// 12345
// 1234
// 123
// 12
// 1

void case1(int n)
{
  for (int i = 0; i < n; i++) // loop for each iteration
  {
    for (int j = 1; j <= n - i; j++) // loop for printing 1 to 5
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("Enter the no. of lines : ");
  scanf("%d", &n);

  case1(n);

  return 0;
}