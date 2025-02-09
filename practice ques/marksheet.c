#include <stdio.h>

struct student
{
  char stu_name[20];
  int stu_roll_no;
  int marks[3];
  int total;
} stu[2];

int main()
{
  for (int i = 1; i <= 2; i++)
  {
    printf("\nEnter the details of student %d :\n", i);
    printf("Enter name: ");
    scanf("%s", &stu[i].stu_name);
    printf("Enter Roll Number: ");
    scanf("%d", &stu[i].stu_roll_no);
    for (int j = 1; j <= 1; j++)
    {
      printf("Enter maths mark: ");
      scanf("%d", &stu[i].marks[j]);
      printf("Enter science mark: ");
      scanf("%d", &stu[i].marks[j + 1]);
      printf("Enter English mark: ");
      scanf("%d", &stu[i].marks[j + 2]);
    }
  }

  for (int i = 1; i <= 2; i++)
  {
    printf("\nDetails of student %d :\n", i);
    printf("Name: %s\n", stu[i].stu_name);
    printf("Roll Number: %d\n", stu[i].stu_roll_no);
    // for (int j = 1; j <= 1; j++)
    // {
    //   printf("maths mark: %d\n", stu[i].marks[j]);
    //   printf("science mark: %d\n", stu[i].marks[j + 1]);
    //   printf("English mark: %d\n", stu[i].marks[j + 2]);
    // }
    printf("Total marks: %d\n", stu[i].marks[1] + stu[i].marks[2] + stu[i].marks[3]);
  }
}