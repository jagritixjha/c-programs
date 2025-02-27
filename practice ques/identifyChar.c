#include "stdio.h"

int main()
{
  char c;

  printf("enter any character: ");
  scanf("%c", &c);

  if (c >= 'A' && c <= 'Z')
  {
    printf("uppercase");
  }
  else if (c >= 'a' && c <= 'z')
  {
    printf("lowercase");
  }
  else if (c >= '0' && c <= '9')
  {
    printf("number");
  }
  else
  {
    printf("special character");
  }
}