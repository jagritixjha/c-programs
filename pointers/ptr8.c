#include <stdio.h>

void sort(int *p, int size)
{
  int i, j, temp;
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - 1; j++)
    {
      if (*(p + j) < *(p + j + 1))
      {
        temp = *(p + j);
        *(p + j) = *(p + j + 1);
        *(p + j + 1) = temp;
      }
    }
  }
}

void disp(int *p, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d ", *(p + i));
  }
}

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
  int size = sizeof(a) / sizeof(a[0]);
  sort(&a[0], size);
  disp(&a[0], size);
  return 0;
}