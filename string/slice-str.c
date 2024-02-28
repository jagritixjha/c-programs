// program to slice a string from a specified start position to an end position entered by the user and display the sliced string.

#include <stdio.h>
#include <string.h>

int main()
{

  char str[20];
  char newstr[20];
  int i, j = 0, n, m;
  printf("Enter the String: ");
  scanf("%s", str);
  printf("Enter the no. from where u want to slice the string:");
  scanf("%d", &n);
  printf("Enter the no. till where u want to slice the arr:");
  scanf("%d", &m);
  for (i = n; i <= m; i++, j++)
  {
    newstr[j] = str[i];
  }
  newstr[j] = '\0';
  printf("Sliced string: %s", newstr);
}