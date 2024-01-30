#include <stdio.h>

void case1();
void case2();
void case3();

int main()
{
  case1();
  case2();
  // case3();   //++i
  return 0;
}

void case1()
{
  int i = 11;
  printf("\nCase 1\n");
  do
  {
    printf("%d \t", i++);
  } while (i <= 5);
  printf("\nThe value of i outside the while = %d\n", i);
}

void case2()
{
  int i = 1;
  printf("\nCase 2\n");
  do
  {
    printf("%d \t", i++);
  } while (i <= 5);
  printf("\nThe value of i outside the while = %d\n", i);
}

void case3()
{
  int i = 1;
  printf("\nCase 3\n");
  do
  {
    printf("%d \t", ++i);
  } while (i <= 5);
  printf("\nThe value of i outside the while = %d", i);
}