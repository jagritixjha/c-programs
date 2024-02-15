//  program to print total number of even elements in an array a an array.

#include <stdio.h>

int main()
{
  int a[50], i, n, p = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      p++;
    }
  }

  printf("Number of even elements in the array: %d\n", p);

  return 0;
}
