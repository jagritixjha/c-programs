// program to read a string of characters from the user until encountering a newline character ('\n') and then display the entered string.

#include <stdio.h>

int main()
{
  char str[20];
  char ch;
  int i;
  // while (ch != '\n')
  // {
  //   scanf("%c", &ch);
  //   str[i] = ch;
  //   i++;
  // }

  for (i = 0; i < 19; i++)
  {
    scanf("%c", &ch);
    if (ch == '\n')
    {
      break;
    }
    str[i] = ch;
  }
  printf("%d\n", i);

  str[i] = '\0';
  puts(str);
  printf("%s", str);
  return 0;
}