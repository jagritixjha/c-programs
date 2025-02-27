#include "stdio.h"

int main()
{
  int yr;

  printf("enter year: ");
  scanf("%d", &yr);

  printf((yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) ? "leap year" : "non leap year");

  return 0;
}