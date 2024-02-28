// program to compare two user-input strings using a built-in function and custom logic, including case-sensitive and case-insensitive comparisons.

#include <stdio.h>
#include <string.h>
char x[50], y[50];

void strCmpFunc();
void strCmpLogic(char str1[], char str2[]);
void strCmpiLogic(char str1[], char str2[]);

int main()
{
  printf("Enter string x: ");
  gets(x);
  printf("Enter string y: ");
  gets(y);
  // strCmpFunc(); // built-in function strcmp() / strcmpi()
  // strCmpLogic(x, y); // logic using loop
  strCmpiLogic(x, y); // logic using loop
  return 0;
}

void strCmpFunc()
{
  int diff = strcmp(x, y);
  printf("The difference = %d\n", diff);

  // diff = strcmpi(x, y);
  // printf("The difference = %d\n", diff);

  if (diff == 0)
  {
    printf("Strings are same!");
  }
  else
  {
    printf("Strings are not same!");
  }
}

void strCmpLogic(char str1[], char str2[])
{
  int i, j, count = 0;

  for (i = 0, j = 0; str1[i] != '\0' || str2[j] != '\0'; i++, j++)
  {
    if (str1[i] - str2[j] == 0)
    {
      count = 0;
    }
    else if (str1[i] - str2[j] > 0)
    {
      count++;
      break;
    }
    else if (str1[i] - str2[j] < 0)
    {
      count--;
      break;
    }
  }

  if (count == 0)
  {
    printf("The difference = %d\n", count);
    printf("Strings are same!");
  }
  else if (count > 0)
  {
    printf("The difference = %d\n", count++);
    printf("Strings are not same !");
  }
  else
  {
    printf("The difference = %d\n", count--);
    printf("Strings are not same!");
  }
}
void strCmpiLogic(char str1[], char str2[])
{
  int i, j, count = 0;

  for (i = 0, j = 0; str1[i] != '\0' || str2[j] != '\0'; i++, j++)
  {
    if (str1[i] - str2[j] == 0 || str1[i] - str2[j] == 32 || str1[i] - str2[j] == -32)
    {
      count = 0;
    }
    else if (str1[i] - str2[j] > 0)
    {
      count++;
      break;
    }
    else if (str1[i] - str2[j] < 0)
    {
      count--;
      break;
    }
  }

  if (count == 0)
  {
    printf("The difference = %d\n", count);
    printf("Strings are same!");
  }
  else if (count > 0)
  {
    printf("The difference = %d\n", count++);
    printf("Strings are not same !");
  }
  else
  {
    printf("The difference = %d\n", count--);
    printf("Strings are not same!");
  }
}
