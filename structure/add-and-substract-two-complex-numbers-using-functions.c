#include <stdio.h>
#include <conio.h>
struct hi
{
  int real1, real2;
  int img1, img2;
} arith;

void main()
{
  int a;
  printf("Enter the real and imaginary part of first number respectively\n");
  scanf("%d", &arith.real1);
  scanf("%d", &arith.img1);
  printf("Enter the real and imaginary part of second number respectively\n");
  scanf("%d", &arith.real2);
  scanf("%d", &arith.img2);
  printf("Select the operation\n1. Addition\n2. Subtraction\n");
  scanf("%d", &a);
  if (a == 1)
  {
    printf("Addition - %d + %d", arith.real1 + arith.real2, arith.img1 + arith.img2);
  }
  else if (a == 2)
  {
    printf("Subtraction - %d + (%di)", arith.real1 - arith.real2, arith.img1 - arith.img2);
  }
  else
  {
    printf("Not a valid operation.");
  }
}