//  Program to demonstrate the use of array name as a pointer in C.

#include <stdio.h>
#include <conio.h>
void main()
{

  int arr[5] = {3, 5, 7, 9, 11};

  printf("2227010701049\n");
  printf("arr : %u, Value : %d\n", arr, *(arr + 1));
  printf("&arr : %u, Value : %d\n", &arr, *(arr));
  printf("&arr[0] : %u, Value : %d\n", &arr[0], *(&arr[0]));

  getch();
}
