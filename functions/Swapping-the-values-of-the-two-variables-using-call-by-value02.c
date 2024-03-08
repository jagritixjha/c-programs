
// Program to illustrate the limitation of call by value in updating a variable's value in C.

#include <stdio.h>
void increment(int num)
{
  num++;
}
int main()
{
  int number = 5;
  printf("Before increment: number = %d\n", number);
  increment(number);
  printf("After increment: number = %d\n", number);
  return 0;
}
