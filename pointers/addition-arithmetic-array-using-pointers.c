// Program to print the elements of an array using a pointer in C.

#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[5] = {3, 5, 7, 9, 11}, i, *ptr = arr, sum = 0;

  for (i = 0; i < 5; i++)
  {
    sum += *(ptr + i);
  }
  printf("addition of array elements is %d ", sum);
  getch();
}
