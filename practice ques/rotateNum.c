#include "stdio.h"

int main()
{

  int num;
  printf("enter 3 digit number: ");
  scanf("%d", &num);

  printf("rotated number is : %d ", (num % 10) * 100 + num / 10);
}