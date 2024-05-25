#include <stdio.h>

struct staffs
{
  char name[20];
  int ID;
  char qualification[30];
};

int main()
{
  struct staffs s1 = {"Jagriti Jha", 49, "Diploma in IT"};
  struct staffs *ptr = &s1;

  puts((*ptr).name);
  printf("%d\n", (*ptr).ID);
  printf("%s", ptr->qualification);

  return 0;
}