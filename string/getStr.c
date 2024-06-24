// C program to perform string manipulation and display a user-input name in various ways, including conversions and reversals.

#include <stdio.h>
#include <string.h>

int main()
{
  char name[50], lname[50];
  printf("Enter the name: ");
  gets(name);

  printf("Hello %s!\n", name);

  strupr(name);
  printf("%s\n", name);

  strlwr(name);
  printf("%s\n", name);

  strrev(name);
  printf("%s\n", name);

  strrev(name);
  strupr(name);
  puts(name);

  printf("length of the string: %d\n", strlen(name));
  return 0;
}