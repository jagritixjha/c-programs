// program to reverse a string entered by the user using two methods: a pseudo-reversal that prints the string in reverse without modifying it, and an actual reversal that modifies the original string.

#include <stdio.h>
char x[50];

void strrev1();
void strrev2();

int main()
{
  printf("Enter the string: ");
  gets(x);
  strrev1();
  // strrev2();
  return 0;
}

void strrev1() // pseudo reverse
{
  int i, len;
  for (len = 0; x[len] != NULL; len++)
    ;
  printf("len = %d", len);
  for (i = len - 1; i >= 0; i--)
  {
    printf("%c", x[i]);
  }
}

void strrev2()
{
  char temp;
  int i, j, len;
  for (len = 0; x[len] != NULL; len++)
    ;
  for (i = 0, j = len - 1; i < len / 2; i++, j--)
  {
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
  }
  puts(x);
}