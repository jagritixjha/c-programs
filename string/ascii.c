// program to display the ASCII values of all uppercase and lowercase alphabets and
//  - ascii of any particular character

#include <stdio.h>
#include <string.h>

void alphaAscii();
void asciiValue();

int main()
{
  alphaAscii(); // ascii of A-Z/a-z
  // asciiValue();  // ascii of any particular character
  return 0;
}

void alphaAscii()
{
  char i;
  for (i = 'A'; i <= 'Z'; i++)
  {
    printf("%c = %d\n", i, i);
  }
  printf("\n");
  for (i = 'a'; i <= 'z'; i++)
  {
    printf("%c = %d\n", i, i);
  }
}

void asciiValue()
{
  char x;
  puts("Enter the value: ");
  scanf("%c", &x);
  printf("%c = %d", x, x);
}
