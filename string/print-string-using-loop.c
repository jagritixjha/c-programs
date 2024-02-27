// program to print first and last names separately using a function and for loop.

#include <stdio.h>

void printstring(char n1[]);

int main()
{
  char firstName[] = "Jagriti", lastName[] = "Jha";

  printstring(firstName);
  printstring(lastName);

  // anotherway
  // printf("%s\n", firstName);
  // printf("%s\n", lastName);
  return 0;
}

void printstring(char n1[])
{
  for (int i = 0; n1[i] != '\0'; i++)
  {
    printf("%c", n1[i]);
  }
  printf("\n");
}