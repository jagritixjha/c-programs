#include <stdio.h>
#include <conio.h>

void main()

{
  int a[50], b[50], m, n, i, j;
  printf("2227010701049\n");
  printf("Enter the size of array a and b;\n");

  scanf("%d%d", &m, &n);
  printf("Enter array elements a:\n");

  for (i = 0; i < m; i++)
  {
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }

  printf("Enter array elements b:\n");
  for (j = 0; j < n; j++)
  {
    printf("b[%d]=", j);
    scanf("%d", &b[j]);
  }

  for (j = 0; j < n; j++)
  {
    a[i] = b[j];
    i++;
  }

  printf("Merge array a:\n");
  for (i = 0; i < m + n; i++)
  {
    printf("%d", a[i]);
  }

  getch();
}
