// program to demostrate use of pointer to access elements in an array.

#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  printf("array element at 2nd index : %d\n", *(arr + 2));
  printf("array element at 5th index : %d\n", *(arr + 5));
  printf("array element at 6th index(garbage value) : %d", *(arr + 6));
  return 0;
}