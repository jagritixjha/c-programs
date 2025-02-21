#include "stdio.h"

void main()
{
  int i = 0; // 5 2 7

  while (i <= 6)
  {
    if (i % 2)
    {
      i = i - 3;
    }
    else
    {
      i = i + 5;
    }
    printf("%d\t", i); 
  }
  printf("\n%d", i); // 7
}