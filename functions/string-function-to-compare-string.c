// Program to compare two strings entered by the user and report if they are equal or not in C.

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char s1[40];
  char s2[20];

  printf("enter s1: ");
  scanf("%s", &s1);

  printf("enter s2: ");
  scanf("%s", &s2);

  if (strcmp(s1, s2) == 0)
  {
    printf("string 1 and string 2 are equal");
  }
  else
  {
    printf("string 1 and 2 are different\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    getch();
  }
}
