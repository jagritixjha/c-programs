// program to print a table from a given starting point to the given ending point.

#include <stdio.h>

int main()
{
  int i, start, end, number;
  printf("Enter the no. ");
  scanf("%d", &number);
  printf("Enter from where u want to start: ");
  scanf("%d", &start);
  printf("Enter till where u want to print: ");
  scanf("%d", &end);
  for (i = start; i <= end; i++)
  {
    printf("%d * %d = %d\n", number, i, number * i);
  }
  return 0;
}