// program to delete an array element at given index.

#include <stdio.h>
#include <conio.h>

void main()
{
  int a[100], i, n, pos, temp;
  printf("enter the number of array elements: ");
  scanf("%d", &n);
  printf("enter array elements\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  printf("enter the pos you want to delete:\n");
  scanf("%d", &pos);
  temp = pos;
  while (temp < n)
  {
    a[temp] = a[temp + 1];
    temp = temp + 1;
  }
  n = n - 1;
  printf("array elements after deletion:\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
  getch();
}
