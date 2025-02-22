#include "stdio.h"

int main()
{
  int i, j, k;
  for (i = 0; i < 3; i++) // 0 1 2 3
  {
    j = i * 2 + 1;  // 1 2 5
    k = j * 3 - 2;  // 1 4 13
  }
  printf("%d  %d  %d  ", i, j, k); // 3 5 13
}