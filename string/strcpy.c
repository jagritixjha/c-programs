// program to copy the content of one string into another using a built-in function and manual logic, displaying both strings afterward.

#include <stdio.h>
#include <string.h>
char x[50], y[50];

void strCpyFunc();
void strCpyLogic(char str1[], char str2[]);

int main()
{
  printf("Enter string x: ");
  gets(x);
  printf("Enter string y: ");
  gets(y);
  // strCpyFunc();

  /* Copy string y into string x. */
  strCpyLogic(x, y);

  /* Print the contents of string y. */
  printf("String x: %s\n", x);
  printf("String y: %s\n", y);
  return 0;
}

void strCpyFunc()
{
  printf("Copied String: %s", strcpy(x, y));
}

void strCpyLogic(char str1[], char str2[])
{
  int i;

  /* Copy the characters of string x to string y or vice versa */
  for (i = 0; y[i] != '\0'; i++)
  {
    str1[i] = str2[i];
  }

  /* Null terminate string y. */
  str1[i] = '\0';
}