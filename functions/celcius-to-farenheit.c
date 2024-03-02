// Program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

float ctof(float c);

int main()
{
  float c;
  printf("Enter the temprature in celcius: ");
  scanf("%f", &c);
  printf("Temp in frenheit: %.3f", ctof(c));
  return 0;
}

float ctof(float c)
{
  float tempinf = (c * 1.8) + 32;
  return tempinf;
}