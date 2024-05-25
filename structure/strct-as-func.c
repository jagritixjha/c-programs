#include <stdio.h>

struct student
{
  char name[20];
  int id;
  int div;
};

void printdetails(struct student s1, int n);

int main()
{
  // struct student s1 = {"Jagriti Jha", 49, 1};
  struct student s1;
  int n;

  printf("\nEnter the no. of students:");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter the details of student %d:\n", i + 1);

    printf("Name: ");
    getchar();
    fgets(s1.name, 20, stdin);

    printf("ID: ");
    scanf("%d", &(s1.id));
    printf("Division: ");
    scanf("%d", &(s1.div));
  }

  printdetails(s1, n);
  return 0;
}

void printdetails(struct student s1, int n)
{
  printf("\nStudent details:\n");

  for (int i = 0; i < n; i++)
  {
    printf("\nStudent: %d\n", i + 1);
    printf("Name: %s", s1.name);
    printf("ID: %d\n", s1.id);
    printf("Division: %d\n", s1.div);
  }
}