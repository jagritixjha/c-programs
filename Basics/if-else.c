#include <stdio.h>

int main()
{
  int x = 10, y = 8, time = 50;

  if (x > y)
  {
    printf("X is greater than Y.\n");
  };

  if (20 < 18)
  {
    printf("20 is greater than 18.\n");
  }
  else
  {
    printf("X is smaller than Y.\n");
  };

  if (time < 25)
  { // if time is less than 25 then good day.
    printf("Good Day.\n");
  }
  else if (time > 30)
  { // if time is greater than 30 then good afternoon.
    printf("Good Afternoon.\n");
  }
  else
  { // if time is not from any of the above queries then good evening.
    printf("Good Evening.\n");
  };

  return 0;
}
