//  Program to add two numbers using a function that returns a pointer in C.

#include <stdio.h>
#include <stdlib.h> // Include the necessary header for malloc

int *add(int *x, int *y)
{
  int *ans = malloc(sizeof(int)); // Allocate memory for the result
  if (ans == NULL)
  {
    printf("Memory allocation failed\n");
    exit(1); // Exit the program if memory allocation fails
  }
  // int *ans;
  *ans = *x + *y;
  // printf("%d\n", *ans);
  return ans;
}

int main()
{
  int a, b, *ans;
  a = 10;
  b = 70;
  ans = add(&a, &b);
  printf("answer = %d\n", *ans);

  // free(ans); // Free the allocated memory
  return 0;
}