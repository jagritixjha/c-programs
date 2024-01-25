#include <stdio.h>

int main() {
  int x = 5, y = 3;
  printf("%d\n", x > y);
  printf("%d\n", x < y);
  printf("%d\n", x != y); // returns 1 (true) because 5 is not equal to 3
  printf("%d\n", x == y); // returns 1 (true) because 5 is not equal to 3
  printf("%d\n", x >= y); // Returns 1 (true) because five is greater than, or equal, to 3
  printf("%d\n", x <= y);// Returns 0 (false) because 5 is neither less than or equal to 3
  return 0;
}