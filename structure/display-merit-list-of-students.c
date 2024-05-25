#include <stdio.h>

struct Student
{
  char name[50];
  int marks;
};

void displayMeritList(struct Student students[], int numStudents)
{
  // Sort the students based on their marks in descending order
  for (int i = 0; i < numStudents - 1; i++)
  {
    for (int j = 0; j < numStudents - i - 1; j++)
    {
      if (students[j].marks < students[j + 1].marks)
      {
        struct Student temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }
  // Display the merit list
  printf("Merit List:\n");
  for (int i = 0; i < numStudents; i++)
  {
    printf("%d. Name: %s, Marks: %d\n", i + 1, students[i].name, students[i].marks);
  }
}

int main()
{
  int numStudents;
  printf("Enter the number of students: ");
  scanf("%d", &numStudents);
  struct Student students[numStudents];
  // Read student details
  for (int i = 0; i < numStudents; i++)
  {
    printf("\nStudent %d:\n", i + 1);
    printf("Enter name: ");
    scanf("%s", students[i].name);
    printf("Enter marks: ");
    scanf("%d", &students[i].marks);
  }
  // Display merit list
  displayMeritList(students, numStudents);
  return 0;
}