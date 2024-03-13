#include <stdio.h>
#include <conio.h>

void main()
{
  int x = 10;
  float y = 3.14;

  void *ptr1;
  void *ptr2;

  ptr1 = &x;
  ptr2 = &y;

  printf("2227010701049\n");
  printf("x = %d\n", *(int *)ptr1);
  printf("y = %f\n", *(float *)ptr2);

  getch();
}
