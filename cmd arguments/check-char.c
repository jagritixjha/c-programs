#include <stdio.h>

int main()
{
  char str[20];
  char ch;
  printf("enter string:");
  fgets(str, 15, stdin);
  printf("enter th char u want to find:");
  scanf("%c", &ch);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
    {
      printf("char found!");
      return;
    }
  }
  printf("char not found.");
}