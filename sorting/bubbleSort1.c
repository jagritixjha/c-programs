#include <stdio.h>
#define s 8

int main()
{
  int a[s], i, j, temp;

  printf("Enter the elements:\n");
  for (i = 0; i < s; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < s - 1; i++) // passes
  {
    for (j = 0; j < s - 1; j++) // internal check
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }

    printf("\nPass no. %d : ", i);
    for (j = 0; j < s; j++)
    {
      printf("%d ", a[j]);
    }
  }

  printf("\nSorted Elements:\n");
  for (i = 0; i < s; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}