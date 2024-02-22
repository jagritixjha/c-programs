// mathematical operations using switch case using character user input & case insensitive.
// demonstates th use of switch case, label, goto.

#include <stdio.h>

void case2();

int main()
{
  case2();
  return 0;
}

void case2() // case 2
{
  int a, b;
  char ch;
TARGET: // label

  printf("\nOperation that can be performed:\na.Addition\tb.Subtraction\tc.Multiplication\nEnter the operation: ");
  fflush(stdin);
  scanf("%c", &ch);

  if (ch == 'a' || ch == 'b' || ch == 'c')
  {
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
  }
  else
  {
    printf("Please enter the correct operation to be performed.\n");
    goto TARGET;
  }

  switch (ch)
  {
  case 'a':
    printf("%d + %d = %d", a, b, a + b);
    break;
  case 'b':
    printf("%d - %d = %d", a, b, (a - b));
    break;
  case 'c':
    printf("%d * %d = %d", a, b, (a * b));
    break;
  default:
    printf("Invalid Choice!");
  }
}
