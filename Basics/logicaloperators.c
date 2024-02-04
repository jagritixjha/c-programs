// Demonstration of logical operators.

#include <stdio.h>

int main()
{
  int x = 5, y = 3;
  printf("%d\n", x > 3 && x < 10); // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10.

  printf("%d\n", x > 3 || x < 4); // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4).

  printf("%d\n", !(x > 3 && x < 10)); // Returns false (0) because ! (not) is used to reverse the result.
  return 0;
}