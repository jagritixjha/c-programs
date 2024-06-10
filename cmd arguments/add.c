#include <stdio.h>

int main(int argc, char *argv[])
{
  int x, y, z;
  x = atoi(argv[1]);
  y = atoi(argv[2]);
  z = atoi(argv[3]);
  printf("\nThe addition of %d + %d + %d = %d", x, y, z, (x + y + z));
  return 0;
}