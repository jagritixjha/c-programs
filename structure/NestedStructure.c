#include <stdio.h>
#include <string.h>
// Declaration of the main structure
struct employee
{
  char name[30];
  int employee_id;
  // Declaration of dependent structure
  struct incomeInLPA
  {
    int base_salary;
    int ctc;
    int bonus;
    int income;
  } inc; // Variable is created which acts as a member to the parent structure
};

int main()
{
  struct employee employees[3];
  for (int i = 1; i < 3; i++)
  {
    printf("Employee %d\n", i);

    printf("Name:");
    scanf("%s", (employees[i].name));

    printf("employee id:");
    scanf("%d", &(employees[i].employee_id));

    printf("Base Salary:");
    scanf("%d", &(employees[i].inc.base_salary));

    printf("CTC:");
    scanf("%d", &(employees[i].inc.ctc));

    printf("Bonus:");
    scanf("%d", &(employees[i].inc.bonus));

    printf("Income:");
    scanf("%d", &(employees[i].inc.income));

    printf("\n");
  }

  return 0;
}