// Program to Demonstrate the Use of Unions

#include <stdio.h>
#include <string.h>

    union Data
{
  int intValue;
  float floatValue;
  char stringValue[20];
};

int main()
{
  union Data data;

  data.intValue = 42;
  printf("Integer Value: %d\n", data.intValue);
  data.floatValue = 3.14;
  printf("Float Value: %f\n", data.floatValue);
  strcpy(data.stringValue, "Hello");
  printf("String Value: %s\n", data.stringValue);
  return 0;
}