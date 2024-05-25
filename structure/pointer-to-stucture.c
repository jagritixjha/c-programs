#include <stdio.h>

// Define a structure
struct Student
{
  int id;
  char name[50];
  float marks;
};

int main()
{
  // Declare a structure variable
  struct Student student;

  // Declare a pointer to the structure
  struct Student *ptr;

  // Assign the address of the structure variable to the pointer
  ptr = &student;

  // Access structure members using the pointer
  printf("Enter student details:\n");

  printf("ID: ");
  scanf("%d", &(ptr->id));

  printf("Name: ");
  scanf("%s", ptr->name);

  printf("Marks: ");
  scanf("%f", &(ptr->marks));

  // Print the student details
  printf("\nStudent Details:\n");
  printf("ID: %d\n", ptr->id);
  printf("Name: %s\n", ptr->name);
  printf("Marks: %.2f\n", ptr->marks);

  return 0;
}
