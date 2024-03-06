// Program to calculate the percentage based on marks in Maths, English, and Science.

#include <stdio.h>

float percentage(float x, float y, float z);

int main()
{
  float maths, eng, sci;

  printf("enter the marks of the following subjects:\nMaths: ");
  scanf("%f", &maths);

  printf("English: ");
  scanf("%f", &eng);

  printf("Science: ");
  scanf("%f", &sci);

  printf("percentage : %.2f", percentage(maths, eng, sci));
  return 0;
}

float percentage(float x, float y, float z)
{
  float percentage = ((x + y + z) / 3);
  return percentage;
}