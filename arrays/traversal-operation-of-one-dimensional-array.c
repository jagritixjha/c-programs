// traversal operation on one dimensional array.

#include <stdio.h>

int main()
{
  int a[100], i, n;

  printf("Enter array size: ");
  scanf("%d", &n);

  printf("Enter array elements\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("Entered array elements are :\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}