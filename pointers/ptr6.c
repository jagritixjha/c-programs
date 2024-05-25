//  Program to traverse and print array elements using pointer arithmetic in different cases in C.

#include <stdio.h>

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, *p;
  int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("\nCase 1 :\n");
  p = &a[0];
  for (i = 0; i < sizeof(a) / 4; i++)
  {
    printf("%d  %u\n", *p, p);
    p++;
  }
  printf("%d  %u\n", *p, p);

  printf("\nCase 2 :\n");
  p = &b[0];
  for (i = 0; i < sizeof(b) / 4; i++)
  {
    printf("%d  %u\n", *(p + i), (p + i));
  }
  printf("%d  %u\n", *p, p);

  printf("\nCase 3 :   //Reverse \n");
  p = &b[9];
  for (i = 0; i < sizeof(b) / 4; i++)
  {
    printf("%d  %u\n", *(p - i), (p - i));
  }
  printf("%d  %u\n", *p, p);
  return 0;
}