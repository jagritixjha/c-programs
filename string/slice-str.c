// program to slice a string from a specified start position to an end position entered by the user and display the sliced string.

#include <stdio.h>
#include <string.h>

int main()
{

  char str[100];
  char newstr[20];
  int i, j = 0, n, m;

  printf("Enter the string: ");
  fgets(str, 100, stdin);
  printf("Enter the start number: ");
  scanf("%d", &n);
  printf("Enter the end number: ");
  scanf("%d", &m);

  for (i = n; i <= m; i++)
  {
    newstr[j++] = str[i];
  }
  newstr[j] = '\0';
  printf("Sliced string: %s", newstr);
}