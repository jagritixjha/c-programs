#include <stdio.h>

int main()
{
  int a[10], i, zero = 0, pos = 0, neg = 0;
  printf("Enter the element values:\n");
  for (i = 0; i < 10; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);

    if (a[i] == 0)
    {
      zero++;
    }
    else if (a[i] > 0)
    {
      pos++;
    }
    else
    {
      neg++;
    }
  }
  printf("Total count of zero: %d\n", zero);
  printf("Total count of positive numbers: %d\n", pos);
  printf("Total count of negative numbers: %d\n", neg);
}