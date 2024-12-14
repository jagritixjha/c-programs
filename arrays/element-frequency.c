#include <stdio.h>

void main()
{
  int a[] = {1, 2, 2, 3, 4, 3, 3, 6};

  for (int i = 0; i < 8; i++)
  {
    int flag = 1;

    for (int j = i + 1; j < 8; j++)
    {
      if (a[i] == a[j] && a[i] != -1)
      {
        a[j] = -1;
        flag++;
      }
    }
    if (a[i] != -1)
    {
      printf("%d = %d\n", a[i], flag);
    }
  }
}