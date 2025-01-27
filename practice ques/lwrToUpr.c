#include <stdio.h>

int main()
{
  char a[30];
  int i;
  printf("Enter the name: ");
  gets(a);
  for (i = 0; a[i] != '\0'; i++)
  {
    if (a[i] >= 'a' && a[i] <= 'z')
    {
      a[i] -= 32;
    }
  }
  printf("uppercase = %s", a);
  return 0;
}