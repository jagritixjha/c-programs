//  Program to demonstrate pointer arithmetic across different data types (int, float, char) in C.

#include <stdio.h>

void case1();
void case2();
void case3();

int main()
{
  printf("Case 1(with int):\n");
  case1();
  printf("Case 2(with float):\n");
  case2();
  printf("Case 3(with char):\n");
  case3();
  return 0;
}

void case1()
{
  int age = 22;
  int *ptr = &age;
  printf("Value of ptr = %u\n", ptr);
  ptr++;
  printf("Value of ptr = %u\n", ptr);
  ptr--;
  printf("Value of ptr = %u\n", ptr);
}

void case2()
{
  float price = 20.00;
  float *ptr = &price;
  printf("Value of ptr = %u\n", ptr);
  ptr++;
  printf("Value of ptr = %u\n", ptr);
  ptr--;
  printf("Value of ptr = %u\n", ptr);
}

void case3()
{
  char star = '*';
  char *ptr = &star;
  printf("Value of ptr = %u\n", ptr);
  ptr++;
  printf("Value of ptr = %u\n", ptr);
  ptr--;
  printf("Value of ptr = %u\n", ptr);
}