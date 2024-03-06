// Program to calculate the square of a number using a custom function.

#include <stdio.h>
#include <conio.h>
// #include <math.h>

int square(int num)
{
  return num * num;
}

void main()
{
  int num, result;
  printf("Enter a number: ");
  scanf("%d", &num);
  result = square(num);
  // result = pow(num, 2);  // math.h function is used here
  printf("The square of %d is %d\n", num, result);
  getch();
}
