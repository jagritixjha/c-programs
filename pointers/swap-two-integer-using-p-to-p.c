#include <stdio.h>

void swap(int **a, int **b)
{
  int *temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x, y;
  int *px = &x, *py = &y;
  int **ppx = &px, **ppy = &py;
  printf("2227010701049\n");

  printf("Enter two integers:\n");
  scanf("%d %d", &x, &y);

  printf("Before swapping: x = %d, y = %d\n", x, y);
  swap(ppx, ppy);
  printf("After swapping: x = %d, y = %d\n", *px, *py);

  return 0;
}
