// mathematical operations using multiple if conditions

#include <stdio.h>

int main()
{
  int ch, a, b;

  printf("Operation that can be performed:\n1.Addition\t2.Subtraction\t3.Multiplication\nEnter the operation: ");
  scanf("%d", &ch);

  if (ch >= 1 && ch <= 3)
  {
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
  }

  if (ch == 1)
  {
    printf("%d + %d = %d", a, b, a + b);
  }
  else if (ch == 2)
  {
    printf("%d - %d = %d", a, b, (a - b));
  }
  else if (ch == 3)
  {
    printf("%d * %d = %d", a, b, (a * b));
  }
  else
  {
    printf("Invalid Choice!");
  }
  return 0;
}