// use the return value of printf

#include "stdio.h"

int main()
{
  int x = printf("hello there!!");
  printf("\nlength of the string: %d", x);
  return 0;
}