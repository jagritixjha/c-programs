#include <stdio.h>

void printAddress(int n)
{
  printf("%u \t(prints the address of copied variable)\n", &n);
}

void _printAddress(int *n)
{
  printf("%u", n);
}

int main()
{
  int n = 4;

  printAddress(n); // call by value
  printf("%u\n", &n);
  _printAddress(&n); // call by reference

  return 0;
}