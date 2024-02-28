// program to read a string of characters from the user until encountering a newline character ('\n') and then display the entered string.

#include <stdio.h>

int main()
{
  char str[50];
  char ch;
  int i;
  // while (ch != '\n') // using while loop
  // {
  //   scanf("%c", &ch);
  //   str[i] = ch;
  //   i++;
  // }

  for (i = 0; i < 50; i++)
  {
    scanf("%c", &ch);
    if (ch == '\n')
    {
      break;
    }
    str[i] = ch;
  }
  str[i] = '\0';
  printf("%s", str);
  // puts(str); // another way
  return 0;
}