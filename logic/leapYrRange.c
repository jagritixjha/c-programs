#include <stdio.h>

int main()
{
  int yr1, yr2, i;
  printf("Enter the starting year: ");
  scanf("%d", &yr1);
  printf("Enter the ending year: ");
  scanf("%d", &yr2);

  printf("Leap years between %d and %d are:\n", yr1, yr2);
  for (i = yr1; i <= yr2; i++)
  {
    if ((i % 400 == 0 && i % 100 == 0) || (i % 100 != 0 && i % 4 == 0))
    {
      printf("%d  ", i);
    }
  }

  return 0;
}