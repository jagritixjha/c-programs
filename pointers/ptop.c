//  Program to access the value of an integer variable using a pointer to a pointer in C.

#include <stdio.h>

int main()
{
  int i = 5;
  int *ptr = &i;
  int **pptr = &ptr;
  printf("value of i: %d", **pptr);
}