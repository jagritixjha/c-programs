#include "stdio.h"

int main()
{
  int s1, s2, s3;
  printf("enter 3 sides of the triangle: ");
  scanf("%d %d %d", &s1, &s2, &s3);

  if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
  {
    printf("valid triangle");
  }
  else
  {
    printf("invalid triangle");
  }
  return 0;
}