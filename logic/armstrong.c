#include <stdio.h>
#include <math.h>

void arms1();
void arms2();

int main()
{
  arms1(); // gives armstrong no. for only 3 digit.
  printf("\n");
  // arms2(); // gives armstrong no. for more than 3 digits.
  return 0;
}

void arms1()234
{
  int n, r, sum = 0, n1, digits = 0, tot;
  printf("Enter the number: ");
  scanf("%d", &n);
  n1 = n;
  // while (n != 0)
  // {
  //   r = n % 10;
  //   printf("r = %d\n", r);
  //   sum += pow(r, 3);
  //   printf("sum = %d\n", sum);
  //   n /= 10;
  //   printf("n = %d\n", n);
  // }
  while (n != 0)
  {
    n = n / 10;
    digits++;
  }
  printf("digits = %d\n", digits);
  n = n1;

  while (n != 0)
  {
    r = n % 10;
    printf("r = %d\n", r);
    tot = 1;
    for (int j = 1; j <= digits; j++)
    {
      // tot *= r;
      tot = tot * r;
    }
    printf("tot = %d\n", tot);
    // sum += pow(r, digits);
    sum = sum + tot;
    printf("sum = %d\n", sum);
    n = (int)n / 10;
    printf("n = %d\n", n);
  }

  if (sum == n1)
  {
    printf("%d is an armstrong number!", n1);
  }
  else
  {
    printf("%d is not an armstrong number!", n1);
  }
}

void arms2()
{
  int n, r, sum = 0, n1, digits = 0, tot;
  printf("Enter the number: ");
  scanf("%d", &n);
  n1 = n;
  while (n != 0)
  {
    n /= 10;
    digits++;
  }
  printf("digits = %d", digits);
  n = n1;

  while (n != 0)
  {
    r = n % 10;
    printf("r = %d\n", r);
    tot = 1;
    for (int j = 1; j <= digits; j++)
    {
      // tot *= r;
      tot = tot * r;
    }
    printf(" tot = %d\n", tot);
    // sum += pow(r, digits);
    sum = sum + tot;
    printf("sum = %d\n", sum);
    n = (int)n / 10;
    printf("n = %d\n", n);
  }

  if (sum == n1)
  {
    printf("%d is an armstrong number!", n1);
  }
  else
  {
    printf("%d is not an armstrong number!", n1);
  }
}