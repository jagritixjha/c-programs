// mathematical operations using switch case & int user input.
// demonstates th use of switch case, label, goto.

#include <stdio.h>

void case1();
void case3();

int main()
{
  case1();
  return 0;
}

void case1() // case 1
{
  int ch, a, b;
TARGET: // label

  printf("Operation that can be performed:\n1.Addition\t2.Subtraction\t3.Multiplication\t4.Division\nEnter the operation: ");
  scanf("%d", &ch);

  if (ch >= 1 && ch <= 4)
  {
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
  }
  else
  {
    printf("\nPlease enter the correct operation to be performed.\n");
    goto TARGET;
  }

  switch (ch)
  {
  case 1:
    printf("%d + %d = %d", a, b, a + b);
    break;
  case 2:
    printf("%d - %d = %d", a, b, (a - b));
    break;
  case 3:
    printf("%d * %d = %d", a, b, (a * b));
    break;
  case 4:
    printf("%d / %d = %d", a, b, (a / b));
    break;
  default:
    printf("Invalid Choice!");
  }
}