// wap to add and print sum of the numbers entered by the user till the user enters 0.

#include "stdio.h"

int main()
{
  int num, sum = 0;
  do
  {
    printf("enter any number: ");
    scanf("%d", &num);
    sum += num;

  } while (num);

  printf("sum of numbers entered : %d", sum);
}