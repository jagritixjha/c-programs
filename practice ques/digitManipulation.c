#include "stdio.h"

int main()
{
  int num, digit = 1;
  printf("enter any number: ");
  scanf("%d", &num);

  printf("last digit : %d", num % 10);

  while (num > 10)
  {
    num /= 10;
    digit++;
  }

  // OR
  // digit = 0;
  // while(num!=0){
  //   num /= 10;
  //   digit++;
  // }

  printf("\nunit digit: %d", num);
  printf("\ndigits: %d", digit);
}