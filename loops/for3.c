//  program to demonstrate value of i outside the 'for loop' in different conditions.

#include <stdio.h>

int main()
{
  int i;
  for (i = 10; i >= 1; i--)
  {
    printf("%d\t", i);
  }
  printf("\nThe value of i outside the \'for loop\': %d", i);
  return 0;
}