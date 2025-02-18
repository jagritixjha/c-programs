#include <stdio.h>
#include <string.h>

int main()
{
  char name1[50], name2[50];
  printf("Enter the name: ");
  gets(name1);
  printf("Hello %s!\n", name1);

  strupr(name1);
  printf("%s\n", name1);

  strrev(name1);
  printf("%s\n", name1);

  strrev(name1);
  strlwr(name1);
  printf("%s\n", name1);

  printf("Enter the any other name to comapare: ");
  gets(name2);

  printf("%d\n", strcmp(name1, name2));
  printf("%d\n", strcmpi(name1, name2));

  printf("%s\n", strcpy(name1, name2));

  printf("length of the string: %d\n", strlen(name1));
  return 0;
}