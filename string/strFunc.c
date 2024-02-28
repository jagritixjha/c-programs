// program that demonstrates various string operations such as input/output, pointer usage, length calculation, copying, concatenation, and comparison.

#include <stdio.h>
#include <string.h>

void IOfunc();
void strPtr();
void strLength();
void countLength();
void strcopy();
void strconcatenation();
void strcompare();

int main()
{
  // IOfunc();
  // strPtr();
  // strLength();
  // countLength();
  // strcopy();
  // strconcatenation();
  strcompare();
  return 0;
}

void strcompare()
{
  char str1[20], str2[20];
  printf("Enter 1st string: ");
  fgets(str1, 20, stdin);

  printf("Enter 2nd string: ");
  fgets(str2, 20, stdin);

  int result = strcmpi(str1, str2);
  printf("%d\n", result);
  if (result == 0)
  {
    printf("Strings are equal.");
  }
  else
  {
    printf("Strings are not equal.");
  }
}

void strconcatenation()
{
  char str1[20], str2[20];
  printf("Enter 1st string: ");
  fgets(str1, 20, stdin);

  printf("Enter 2nd string: ");
  fgets(str2, 20, stdin);

  strcat(str2, str1);
  printf("String 2 = %s", str2);
}

void strcopy()
{
  char str1[20], str2[20];
  printf("Enter 1st string: ");
  fgets(str1, 20, stdin);

  printf("Enter 2nd string: ");
  fgets(str2, 20, stdin);

  strcpy(str2, str1);
  printf("String 2 = %s", str2);
}

void countLength()
{
  // countLenght of the string using loops...
  char str[100];
  printf("Enter ur name: ");
  fgets(str, 100, stdin);
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  printf("Lenght of the string is %d", count - 1);
  printf("\n");
}

void strLength()
{
  char name[] = "hello";
  int len = strlen(name);
  printf("lenght of the string %s is %d\n", name, len);
  printf("\n");
}

void strPtr()
{
  char *canChange = "Hello World";
  puts(canChange);
  canChange = "hello";
  puts(canChange);
  printf("\n");
}

void IOfunc()
{
  char str[30];
  printf("Enter string: ");
  // gets(str);  // dangerous to use
  fgets(str, 100, stdin);
  puts(str);
}