// Program to Demonstrate the Use of Unions with a Function

#include <stdio.h>
    union Variant
{
  int intValue;
  float floatValue;
  char charValue;
};
void printVariant(union Variant variant, int type)
{
  switch (type)
  {
  case 0:
    printf("Integer Value: %d\n", variant.intValue);
    break;
  case 1:
    printf("Float Value: %f\n", variant.floatValue);
    break;
  case 2:
    printf("Character Value: %c\n", variant.charValue);
    break;
  default:
    printf("Invalid type\n");
    break;
  }
}
int main()
{
  union Variant variant;
  variant.intValue = 42;
  printVariant(variant, 0);
  variant.floatValue = 3.14;
  printVariant(variant, 1);
  variant.charValue = 'A';
  printVariant(variant, 2);
  return 0;
}