// Online C compiler to run C program online
#include <stdio.h>

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int i = 0;

  while (arr[i] != -1)
  {
    i++;
  }

  printf("%d\n", i - 1);
  printf("%d\n", arr[6]);
  printf("%d\n", arr[7]);

  printf("%d\n", sizeof(arr));
  // int first = arr;

  printf("%d\n", &arr);
  printf("%d\n", &arr + 1);
  printf("%d", ((&arr + 1) - &arr));

  return 0;
}