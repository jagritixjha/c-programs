//  Program to find the smallest number in an array using pointers in C.

#include <stdio.h>

int main()
{
  int numbers[7], min, i;
  int *ptr_numbers = numbers;
  printf("Enter 5 numbers:\n");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", ptr_numbers + i);
  }

  min = *ptr_numbers;
  for (i = 1; i < 5; i++)
  {
    if (*(ptr_numbers + i) < min)
    {
      min = *(ptr_numbers + i);
    }
  }

  printf("The smallest number is: %d\n", min);
  return 0;
}
