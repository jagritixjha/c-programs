#include <stdio.h>

struct grocceries
{
  char veg[20];
  char fru[20];
} needs;

int main()
{
  int n, m;

  printf("Enter the no. of vegetables and fruits:");
  scanf("%d %d", &n, &m);
  getchar();
  printf("Enter the names of vegetables:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d.", i + 1);
    fgets(needs.veg, 20, stdin);
  }

  printf("Enter the names of fruits:\n");
  for (int i = 0; i < m; i++)
  {
    printf("%d.", i + 1);
    fgets(needs.fru, 20, stdin);
  }
  return 0;
}