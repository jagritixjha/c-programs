#include <stdio.h>

int main()
{
  int i, n;
  printf("Enter the no. of elements: ");
  scanf("%d", &n);

  int arr[n];
  int *ptr = &arr[0];

  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    printf("arr[%d] =", i);
    scanf("%d", &ptr[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (ptr[i] % 2 == 0)
    {
      printf("%d is even!\n", ptr[i]);
    }
    else
    {
      printf("%d is odd!\n", ptr[i]);
    }
  }
  return 0;
}