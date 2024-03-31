//  Program to access and print values of different data types using a void pointer in C.

#include <stdio.h>

int main()
{
  int num = 10;
  float fnum = 3.14; 
  char ch = 'a';
  void *ptr;
  printf("2227010701049\n");
  ptr = &num;
  printf("Value of num: %d\n", *(int *)ptr);

  ptr = &fnum;
  printf("Value of fnum: %f\n", *(float *)ptr);

  ptr = &ch;
  printf("Value of ch: %c\n", *(char *)ptr);

  return 0;
}
