#include <stdio.h>

int main()
{
  int date, mon, yr;

  printf("Enter date in format dd/mm/yyyy: ");

  // Take input while automatically printing slashes
  scanf("%2d", &date);
  printf("/"); // Immediately print '/'

  scanf("%2d", &mon);
  printf("/"); // Immediately print '/'

  scanf("%4d", &yr); // Read 4-digit year

  printf("\nEntered date: %02d/%02d/%04d\n", date, mon, yr);

  return 0;
}
