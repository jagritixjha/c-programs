// use of getch() method

#include <stdio.h>
#include <conio.h>

int main()
{
  char x = getch(); // only takes single char input
  printf("x = %d\n", x);
  getch();
  printf("How are you?");
  getch();
}