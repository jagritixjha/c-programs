#include <stdio.h>

void main()
{
  int y;
  printf("enter year: ");
  scanf("%d", &y);

  if ((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
  {
    printf("leap year");
  }
  else
    printf("not a leap year");

  //// ==>> easy to understand logic ⬇️

  /*   if (y % 100 == 0)
    {
      if (y % 400 == 0)
        printf("century leap year");
      else
        printf("not a century leap year");
    }
    else if (y % 4 == 0)
    {
      printf("leap year");
    }
    else
      printf("not a leap year"); */
}