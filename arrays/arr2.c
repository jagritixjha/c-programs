// program to print sum of array elements,
// use a preprocessor directive to declare array size.

/*
  #define is a preprocessor directive that is used to define macros.
  A macro is a name given to a piece of code, so whenever the compiler encounters a macro in a program, it will replace it with the macro value.

  Syntax:
  #define macro_name value
*/

#include <stdio.h>
#define SIZE 60

int main()
{
  int arr[SIZE], sum = 0, i, n;

  printf("Enter the no. of elements: ");
  scanf("%d", &n);

  printf("Enter the values of elements:\n");
  for (i = 0; i <= n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("\nValues entered:\n");
  for (i = 0; i <= n; i++)
  {
    printf("a[%d] = %d\n", i, arr[i]);
  }

  printf("\nSum of elements: %d", sum);
  return 0;
}