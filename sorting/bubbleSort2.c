#include <stdio.h>
#define s 4

int main() // intelligent sort
{
  int a[s], i, j, temp, count;

  printf("Enter the elements:\n");

  for (i = 0; i < s; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < s - 1; i++)
  {
    count = 0;
    for (j = 0; j < s - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        count++;
      }
    }

    if (!count)
    {
      break;
    }

    printf("Pass no. %d : ", i + 1);
    for (j = 0; j < s; j++)
    {
      printf("%d ", a[j]);
    }
    printf("\n");
  }

  printf("\nSorted elements:\n ");
  for (i = 0; i < s; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}