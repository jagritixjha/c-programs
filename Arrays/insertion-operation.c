#include <stdio.h>

int main()
{
  int i, j, n, pos, val, temp;

  printf("No. of eles? ");
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
  // int arr[n + 1];
  temp = arr[pos];
  arr[pos] = val;
  for (i = pos + 1; i < n; i++)
  {
    arr[i] = temp;
    temp = arr[i + 2];
  }

  printf("print array elements:\n");
  for (i = 0; i < n; i++)
  {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
}