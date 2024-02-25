// program to print searched element and display message if found or not.

#include <stdio.h>
int main()
{
  int i, n, num, pos, found = 0;
  printf("enter the array size: ");
  scanf("%d", &n);
  int a[n];
  printf("enter array elements: \n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  printf("enter the number: ");
  scanf("%d", &num);
  for (i = 0; i < n; i++)
  {
    if (a[i] == num)
    {
      found = 1;
      pos = i;
      printf("%d is found in array at index %d.\n", num, pos);
    }
  }
  if (found == 1)
  {
    printf("\nnumber found!");
  }
  else
  {
    printf("number is not found!");
  }
  return 0;
}