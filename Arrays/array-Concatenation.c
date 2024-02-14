// program to concatenate two arrays into another array.

#include <stdio.h>

int main()
{
  int s1, s2, i, j;

  printf("Enter size of array 1: ");
  scanf("%d", &s1);
  int a[s1];
  for (i = 0; i < s1; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("\nEnter size of array 2: ");
  scanf("%d", &s2);
  int b[s2];
  for (i = 0; i < s2; i++)
  {
    printf("b[%d] = ", i);
    scanf("%d", &b[i]);
  }

  int s3 = s1 + s2, c[s3];

  for (int i = 0; i < s1; i++)
  {
    c[i] = a[i];
  }

  for (int i = 0; i < s2; i++)
  {
    c[s1 + i] = b[i];
  }

  printf("Concatened array:\n");
  for (i = 0; i < s3; i++)
  {
    printf("\nc[%d] = %d", i, c[i]);
  }
  return 0;
}
