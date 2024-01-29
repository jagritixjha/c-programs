#include <stdio.h>

void case1();
void case2();
void case3();

int main()
{
  // case1();
  // case2();
  case3();
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
    printf("Please enter the correct operation to be performed.\n");
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

void case2() // case 2
{
  int a, b;
  char ch;
TARGET: // label

  printf("Operation that can be performed:\na.Addition\tb.Subtraction\tc.Multiplication\nEnter the operation: ");
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