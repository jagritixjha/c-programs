// Program to demonstrate call by value and call by reference in swapping two numbers in C.

#include <stdio.h>

void swap(int x, int y);
void _swap(int *x, int *y);

int main()
{
  int x = 10;
  int y = 11;

  printf("Values before swap: x = %d, y = %d\n", x, y);

  swap(x, y);                                          // here values will change as it's just limited to the function. It won't effect the real value.
  printf("Values after swap: x = %d, y = %d\n", x, y); // value won't change as copies of arguments are passed to the calling funcion here, therefor it wont change the real value giving the same value!

  _swap(&x, &y); // it directly changes the value by going to address and therefor changing the value value in real.
  printf("Values after swap: x = %d, y = %d", x, y);
}

// call by value
void swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
  printf("Values after swap: x = %d, y = %d \t //changed only in the function not in real\n", x, y);
}

// call by refernce
void _swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}