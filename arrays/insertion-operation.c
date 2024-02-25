//  program to insert element at specific position.

#include <stdio.h>

int main()
{
  int i, n, pos, val;

  printf("No. of elements? ");
  scanf("%d", &n);
  int arr[n];

  for (i = 0; i < n; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  printf("Enter position & value: ");
  scanf("%d %d", &pos, &val);

  n += 1;
  arr[n];

  for (int i = n; i >= pos; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[pos] = val;

  printf("array elements after insertion:\n");
  for (i = 0; i < n; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}