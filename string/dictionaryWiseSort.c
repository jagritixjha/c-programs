// program to sort and display 5 names entered by the user in dictionary order, with options for case sensitive and case insensitive sorting.

#include <stdio.h>
#include <string.h>
char x[5][50], temp[50];
int i, j, k;

void case1();
void case2();

int main()
{
  puts("Enter 5 names:");
  for (i = 0; i < 5; i++)
  {
    // printf("x[%d] = ", i);
    gets(x[i]);
  }
  case1(); // case sensitive
  // case2(); // case insensitive
  return 0;
}

// function to sort and display 5 names entered by the user in dictionary order.
void case1()
{
  for (i = 0; i <= 3; i++) // passes
  {
    for (j = 0; j <= 3; j++) // internal check
    {
      if (strcmp(x[j], x[j + 1]) > 0)
      {
        strcpy(temp, x[j]);
        strcpy(x[j], x[j + 1]);
        strcpy(x[j + 1], temp);
      }
    }
    printf("Pass %d = ", i);
    for (k = 0; k <= 3; k++)
    {
      printf("%s ", x[k]);
    }
    printf("\n");
  }

  puts("The dictionary wise sort : ");
  for (i = 0; i < 5; i++)
  {
    puts(x[i]);
  }
}

// function to sorts and displays 5 user-entered names in case-insensitive lexicographical order
void case2()
{
  for (i = 0; i <= 3; i++)
  {
    for (j = 0; j <= 3; j++)
    {
      if (strcmpi(x[j], x[j + 1]) > 0)
      {
        strcpy(temp, x[j]);
        strcpy(x[j], x[j + 1]);
        strcpy(x[j + 1], temp);
      }
    }
    printf("Pass %d = ", i);
    for (k = 0; k <= 3; k++)
    {
      printf("%s ", x[k]);
    }
    printf("\n");
  }

  puts("The dictionary wise sort : ");
  for (i = 0; i < 5; i++)
  {
    puts(x[i]);
  }
}