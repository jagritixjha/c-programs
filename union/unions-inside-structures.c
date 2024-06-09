// Program to Demonstrate the Use of Union within a Structure

#include <stdio.h>

// Define a union
union Data
{
  int intValue;
  float floatValue;
  char stringValue[20];
};

// Define a structure containing a union
struct Student
{
  int id;
  char name[50];
  union Data data;
};

int main()
{
  // Declare a structure variable
  struct Student student;

  // Assign values to the structure members
  student.id = 123;
  strcpy(student.name, "John Doe");
  student.data.intValue = 10;

  // Print the structure values
  printf("Student ID: %d\n", student.id);
  printf("Student Name: %s\n", student.name);
  printf("Data (int): %d\n\n", student.data.intValue);

  // Assign a different value to the union member
  student.data.floatValue = 3.14;

  // Print the structure values again
  printf("Student ID: %d\n", student.id);
  printf("Student Name: %s\n", student.name);
  printf("Data (float): %.2f\n\n", student.data.floatValue);

  // Assign a different value to the union member
  strcpy(student.data.stringValue, "Hello");

  // Print the structure values once more
  printf("Student ID: %d\n", student.id);
  printf("Student Name: %s\n", student.name);
  printf("Data (string): %s\n", student.data.stringValue);

  return 0;
}