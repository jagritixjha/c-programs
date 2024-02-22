// Program to demonstarte use else-if conditional statements.

#include <stdio.h>

int main()
{
  int time = 50;

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
