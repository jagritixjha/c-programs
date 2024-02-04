// Demonstration of constant(const) keyword.

#include <stdio.h>

int main()
{
  const int BIRTHYEAR = 2005;
  const int minutesPerHour = 60;
  const float PI = 3.14;
  printf("Birth-year = %d\n", BIRTHYEAR);
  printf("MinutesPerHour = %d\n", minutesPerHour);
  printf("PI = %f\n", PI);
  // BIRTHYEAR = 2007; // error - expression must be a modifiable lvalue
  return 0;
}