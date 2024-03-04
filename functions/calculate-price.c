// Program to calculate the final price of an item by adding 18% GST to the user-input base price.

#include <stdio.h>

float calculatePrice(float x);

int main()
{
  float price;
  printf("Enter the price: ");
  scanf("%f", &price);
  printf("final price: %.3f", calculatePrice(price));
  return 0;
}

float calculatePrice(float x)
{
  float price = x + (0.18 * x);
  // printf("Price after addition of gst: %f", newprice);
  return price;
}
