// wap to find the runner-up from the array of integer

#include <stdio.h>

int main()
{
  int n, i, j, max = 0;
  // printf("enter numbers of elements: ");
  // scanf("%d", &n);

  int arr[6] = {-2, 5, -8, 3, 0, 7};

  // for (i = 0; i < 6; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }

  for (i = 0; i < 6; i++)
  {
    if (arr[i] > max)
    {
      // printf("i = %d\n", i);
      max = arr[i];
      j = i;
    }
  }

  arr[j] = -1;
  max = 0;

  for (i = 0; i < 6; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  printf("max2 = %d\n", max);
}