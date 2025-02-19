// ascii value maniulation using %c and %d format specifier

#include <stdio.h>
#include <conio.h>

int main()
{
  char a = 123;
  printf("a = %c\n", a);
  printf("a = %d\n", a);
  a = 100;
  printf("a = %d\n", a);
  a = 101;
  printf("a =%c %d\n", 9, a);
  a = 127;
  printf("a = %d\n", a);
  a = 97;
  printf("a = %c\n", a);
  a = 255;
  printf("a = %c\n", a);
  a = 256;
  printf("a = %d\n", a);

  int b = 'A';
  printf("b = %d\n", b);
  getch();
}