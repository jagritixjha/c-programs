#include "stdio.h"

int main()
{
  // user input -  (27/11/2022)
  // display - (d - 27, m - 11, y - 2022)
  int d, m, y;

  printf("enter date(DD/MM/YY): ");
  scanf("%d * %d * %d", &d, &m, &y);

  printf("date - %d, month - %d, year - %d", d, m, y);
}