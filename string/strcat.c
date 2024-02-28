// C program to concatenate two user-entered strings using various methods, including a built-in function and custom logic(while loop & for loop).

#include <stdio.h>
#include <string.h>
char x[50], y[50];

void strCatFunc();
void strCatLogic();
void strCatLogic2();

int main()
{
  printf("Enter the str1: ");
  gets(x);
  printf("Enter the str2: ");
  gets(y);
  // strCatFunc();    // built-in function
  // strCatLogic(); // logic using while loop
  strCatLogic2(); // logic using for loop
  return 0;
}

void strCatFunc() // built-in function
{
  printf("%s\n", strcat(x, y));
  printf("%s\n", x);
}

void strCatLogic() // while loop
{
  int i = 0, j = 0;
  while (x[i] != NULL)
  {
    i++;
  }
  // printf("i = %d\n", i);

  while (y[j] != NULL)
  {
    x[i] = y[j];
    i++; // or it could be written as  x[i++] = y[j++];
    // printf("i = %d\n", i);
    j++;
  }
  x[i] = NULL;
  printf("The Concatenated string: %s", x);
}

void strCatLogic2() // for loop
{
  int i, j;
  for (i = 0; x[i] != '\0'; i++)
    ;
  for (j = 0; y[j] != '\0'; j++, i++)
  {
    x[i] = y[j];
  }
  x[i] = NULL;
  printf("The Concatenated string: %s", x);
}
