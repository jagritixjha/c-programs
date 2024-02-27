// program to count the number of vowels in a user-input string.

#include <stdio.h>

int main()
{
  char str[50];
  printf("Enter the string: ");
  fgets(str, 50, stdin);
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      count++;
    }
  }
  printf("No. of vowels in %s is %d.", str, count);
  return 0;
}
