#include <stdio.h>
void main()
{
  int i, n, num, pos, found = 0;
  printf("enter the array size:\n");
  scanf("%d", &n);
  int a[n];
  printf("enter array elements:\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }
  printf("enter the number:\n");
  scanf("%d", &num);
  for (i = 0; i < n; i++)
  {
    if (a[i] == num)
    {
      found = 1;
      pos = i;
      printf("%d is found in array at %d number position", num, pos);
    }
  }
  if (found == 1)
  {
    printf("\nnumber is found!");
  }
  else
  {
    printf("number is not found!");
  }
  getch();
}