// mathematical operations using switch case , case sensitive user input & exit option.
// demonstates th use of switch case, label, goto.

#include <stdio.h>

void case3();

int main()
{
  case3();
  return 0;
}

void case3() // case 3
{
  int a, b;
  char ch;
  do
  {
  X:
    printf("\nOperation that can be performed:\na.Addition\tb.Subtraction\tc.Multiplication\td.Division\tx.Exit\nEnter the operation: ");
    fflush(stdin);
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D')
    {
      printf("Enter value of a: ");
      scanf("%d", &a);
      printf("Enter value of b: ");
      scanf("%d", &b);
    }
    else if (ch == 'X' || ch == 'x')
    {
    }
    // else
    // {
    //   goto X;
    // }

    switch (ch)
    {
    case 'A':
    case 'a':
      printf("%d + %d = %d\n", a, b, a + b);
      break;
    case 'B':
    case 'b':
      printf("%d - %d = %d\n", a, b, (a - b));
      break;
    case 'C':
    case 'c':
      printf("%d * %d = %d\n", a, b, (a * b));
      break;
    case 'D':
    case 'd':
      printf("%d / %d = %d\n", a, b, (a / b));
      break;
    case 'X':
    case 'x':
      printf("\nThank you!");
      break;
    default:
      printf("\nInvalid Choice!\n");
    }
  } while (ch != 'X' && ch != 'x');
}
