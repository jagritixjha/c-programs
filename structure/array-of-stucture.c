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
  // Declare an array of structures
  struct Student students[3];
  // Populate the array with student details
  printf("Enter student details:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Student %d\n", i + 1);
    printf("ID: ");
    scanf("%d", &(students[i].id));

    printf("Name: ");
    scanf("%s", students[i].name);

    printf("Marks: ");
    scanf("%f", &(students[i].marks));

    printf("\n");
  }

  // Print the student details
  printf("\nStudent Details:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Student %d\n", i + 1);
    printf("ID: %d\n", students[i].id);
    printf("Name: %s\n", students[i].name);
    printf("Marks: %.2f\n\n", students[i].marks);
  }

  return 0;
}
