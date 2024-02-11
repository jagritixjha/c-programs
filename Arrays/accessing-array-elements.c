#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  printf("%d\t", *(arr + 2));
  printf("%d\t", *(arr + 5));
  printf("%d", *(arr + 6));
}