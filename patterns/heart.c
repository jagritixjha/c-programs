#include "stdio.h"

int main()
{

  for (int i = 0; i < 3; i++)  
  {
    for (int j = 0; j < 19; j++)
    {
      if (((j >= 2 - i) && (j <= 6 + i)) || ((j >= 12 - i) && (j <= 16 + i)))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 19; j++)
    {
      if (i == 0 && j == 6)
        printf("jagriti");

      if (i == 0 && j > 6 && j < 14)
      {
        continue;
      }
      if (j >= i && j <= 18 - i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}