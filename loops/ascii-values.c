/*
  program to print ASCII values of all characters.
*/

#include <stdio.h>

int main()
{
  int i;

  /* Print ASCII values from 65 to 90 */
  for (i = 65; i <= 90; i++)
  {
    printf("ASCII value of character %c = %d\n", i, i);
  }
  return 0;
}