// Program to print the multiplication table of a given number

#include <stdio.h>

void printtable(int n);

int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d", &n);
  printtable(n);
  return 0;
}

void printtable(int n)
{
  int i;
  for (i = 1; i < 11; i++)
  {
    printf("%d * %d = %d\n", n, i, n * i);
  }
}
