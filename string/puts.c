// program to read a string from standard input and then print it.

#include <stdio.h>

int main()
{
  char name[50];
  fgets(name, 50, stdin);
  puts(name);
  return 0;
}