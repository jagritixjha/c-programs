#include "stdio.h";

int main()
{
  // EXAMPLE 2
  int *ptr = NULL;
  {
    int x = 10;
    ptr = &x;
  }
  // x goes out of scope and memory allocated to x is free now.
  // So ptr is a dangling pointer now.

  // ptr is a dangling pointer now and operations like following are invalid
  //  printf("%d", *ptr);
}