// program to print elements of array without initializing an array.

#include <stdio.h>

int main()
{
  int a[3], i;
  for (i = 0; i < 3; i++)
  {
    printf("\n%u", &a[i]);
    // Unsigned Integer Format Specifier – %u
  }
  return 0;
}