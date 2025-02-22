#include "stdio.h"

void main()
{

  int a = 2, b = -1, c;
  do
  {
    c = a + b + 1;
    printf("%d ", c); // 2 2 6 10
    a = b + 1; // 0  2 4 6
    b = a + 1; // 1  3 5 7
  } while (c < 10);
} 