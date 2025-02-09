// wap to find the runner-up from the array of integer

#include <stdio.h>

int main()
{
  int n, i, j, max = 0;
  // printf("enter numbers of elements: ");
  // scanf("%d", &n);

  int arr[6] = {1, 3, 5, 7, 9, 11};

  // for (i = 0; i < 6; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }

  for (i = 0; i < 6; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      j = i;
    }
  }

  arr[j] = -1;
  max = -1;

  for (i = 0; i < 6; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  printf("max2 = %d\n", max);
}