#include "stdio.h"

int main()
{
  int n1 = 1, n2 = 5, n3;

  n3 = n1;
  n1 = n2;
  n2 = n3;

  printf("%d %d", n1, n2);
}  