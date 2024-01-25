#include <stdio.h>
#include <conio.h>
void main()
{
  int a[50], i, n;
  float sum, average;
  printf("2227010701049\n");
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    sum += a[i];
  }
  average = sum / n;
  printf("Average of array is %.2f", average);
  getch();
}