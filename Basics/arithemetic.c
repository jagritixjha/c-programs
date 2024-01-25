#include <stdio.h>

int main()
{
  int x = 4, y = 6;
  printf("Addition = %d\n", x + y);
  printf("Subtraction = %d\n", x - y);
  printf("Multiplication = %d\n", x * y);
  printf("Division = %d\n", x / y);
  printf("Modulus = %d\n", x % y);
  printf("Increment = %d\n", ++x);
  printf("Decrement = %d\n", --x);
  printf("%d", sizeof(int));

  return 0;
}