#include <stdio.h>
#define r 6
// #define c 2

int main()
{
  int arr[r], i, srch, count = 0;

  for (i = 0; i < r; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  printf("Enter the value to be searched : ");
  scanf("%d", &srch);

  for (i = 0; i < r; i++)
  {
    if (srch == arr[i])
    {
      printf("Element %d found at arr[%d]!\n", srch, i);
      count++;
    }
  }

  if (count == 0) // count != 0
  {
    printf("Element %d not found!", srch);
  }
  else
  {
    printf("Total no. of occurence = %d", count);
  }
  return 0;
}