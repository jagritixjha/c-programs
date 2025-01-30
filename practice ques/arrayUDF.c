#include <stdio.h>

int main()
{
  int i, n, arr[7];

  printf("Enter the elements:\n");
  for (i = 0; i < 7; i++)
  {
    printf("arr[%d] =", i);
    scanf("%d", &arr[i]);
  }

  printf("Odd no.s in the array:\n");
  for (i = 0; i < 7; i++)
  {
    if (arr[i] % 2 != 0)
    {
      printf("%d\t", arr[i]);
    }
  }
  return 0;
}