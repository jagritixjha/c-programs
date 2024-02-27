// program that prompts the user to enter their name and then greets them by name.
// Note: This program cannot handle names with spaces.

#include <stdio.h>

int main()
{
  char name[20];
  printf("Enter your name:");
  scanf("%s", name); // cannot access multiple words
  printf("Hello %s!", name);
  return 0;
}