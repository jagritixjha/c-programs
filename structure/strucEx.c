#include <stdio.h>
#include <string.h>

struct student
{
  char name[20];
  int roll_no;
  int marks;
};

int main()
{
  struct student s1;
  strcpy(s1.name, "Jagriti Jha");
  s1.roll_no = 49;
  s1.marks = 46;

  printf("Student name: %s\n", s1.name);
  printf("Student roll no: %d\n", s1.roll_no);
  printf("Student marks: %d\n\n", s1.marks);

  // struct student s2;
  // strcpy(s2.name, "Deepa Kunwar");
  // s2.roll_no = 69;
  // s2.marks = 56;
  struct student s2 = {"Deepa Kunwar", 69, 56};

  printf("Student name: %s\n", s2.name);
  printf("Student roll no: %d\n", s2.roll_no);
  printf("Student marks: %d\n\n", s2.marks);

  struct student s3;
  strcpy(s3.name, "Poonam Sharam");
  s3.roll_no = 154;
  s3.marks = 45;

  printf("Student name: %s\n", s3.name);
  printf("Student roll no: %d\n", s3.roll_no);
  printf("Student marks: %d", s3.marks);

  return 0;
}