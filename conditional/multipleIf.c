// mathematical operations using multiple if conditions.

#include <stdio.h>

int main()
{
  int ch, a, b;
  printf("Enter value of a: ");
  scanf("%d", &a);
  printf("Enter value of b: ");
  scanf("%d", &b);

  printf("Operation that can be performed:\n1.Addition\t2.Subtraction\t3.Multiplication\nEnter the operation: ");
  scanf("%d", &ch);

  if (ch == 1)
  {
    printf("%d + %d = %d", a, b, (a + b));
  }
  if (ch == 2)
  {
    printf("%d - %d = %d", a, b, (a - b));
  }
  if (ch == 3)
  {
    printf("%d * %d = %d", a, b, (a * b));
  }
  if (ch > 3)
  {
    printf("invalid choice!!");
  }
  return 0;
}