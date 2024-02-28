// program to append a predefined "salt" string to a user-input password and display the result.

#include <stdio.h>
#include <string.h>

int main()
{
  char pass[10];
  char salt[] = "jhg";
  printf("enter the password: ");
  // fgets(pass, 10, stdin);
  scanf("%s", pass);
  strcat(pass, salt);
  printf("new pass: ");
  puts(pass);
  return 0;
}