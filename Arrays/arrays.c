#include <stdio.h>

int main()
{
  int a[3], i;
  for (i = 0; i < 3; i++)
  {
    printf("\n%u", &a[i]);
  }
  return 0;
}