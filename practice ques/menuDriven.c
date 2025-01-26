#include <stdio.h>

int palindrome(int num)
{
  int orig = num, reversed = 0, remainder;
  while (num != 0)
  {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }
  return orig == reversed;
}

int magic(int num)
{
  while (num > 9)
  {
    int sum = 0;
    while (num > 0)
    {
      sum += num % 10;
      num /= 10;
    }
    num = sum;
  }
  return num == 1;
}

int main()
{
  int choice, num;

  do
  {
    printf("\nMenu:\n");
    printf("1. Check if a number is a palindrome\n");
    printf("2. Check if a number is a magic number\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("\nEnter a number: ");
      scanf("%d", &num);
      if (palindrome(num))
      {
        printf("%d is a palindrome number.\n", num);
      }
      else
      {
        printf("%d is not a palindrome number.\n", num);
      }
      break;
    case 2:
      printf("\nEnter a number: ");
      scanf("%d", &num);
      if (magic(num))
      {
        printf("%d is a magic number.\n", num);
      }
      else
      {
        printf("%d is not a magic number.\n", num);
      }
      break;
    case 3:
      printf("Thank you!\n");
      break;
    default:
      printf("Invalid choice. Please choose 1, 2, or 3.\n");
      break;
    }
  } while (choice != 3);

  return 0;
}
