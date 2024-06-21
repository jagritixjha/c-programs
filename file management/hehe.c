#include <stdio.h>

int main()
{
  char *x;
  FILE *f1;
  f1 = fopen("data.txt", "r");
  while (1)
  {
    fscanf(f1, "%s", x);
    printf("%s ", x);
  }

  printf("\nFile reading over!");
  fclose(f1);
  return 0;
}
