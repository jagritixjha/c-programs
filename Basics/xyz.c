#include <stdio.h>
#include <conio.h>
int main()
{
  int i, N;
  printf("Enter a positive integer N:");
  scanf("%d", &N);

  printf("Odd numbers from 1 to %d are:\n", N);
  for (int i = 1; i <= N; i++)
  {
    if (i % 2 != 0)
    {
      printf("%d", i);
    }
  }
  return 0;
}