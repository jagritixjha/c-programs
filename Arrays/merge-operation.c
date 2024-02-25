//  program to merge of two arrays into first array.

#include <stdio.h>

int main()

{
  int m, n, i, j;
  printf("Enter the size of array a and b: ");
  scanf("%d %d", &m, &n);

  int a[m], b[n];

  printf("Enter elements array of a:\n");
  for (i = 0; i < m; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("Enter elements of array b:\n");
  for (j = 0; j < n; j++)
  {
    printf("b[%d] = ", j);
    scanf("%d", &b[j]);
  }

  m += n;

  for (i = m - n, j = 0; i < m && j < n; i++, j++)
  {
    a[i] = b[j];
  }

  printf("Merged array a:\n");
  for (i = 0; i < m; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}
