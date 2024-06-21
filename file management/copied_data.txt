#include <stdio.h>

int main()
{
  FILE *f1;
  char x[6];
  int i, flag = 0;
  f1 = fopen("hehe.c", "r");
  while (1) // -1 = EOF
  {
    for (i = 0; i < 5; i++)
    {
      x[i] = getc(f1);
      if (x[i] == EOF)
      {
        flag = 1;
        break;
      }
    }
    x[i] = '\0';
    printf("%s", x);
    if (flag)
    {
      break;
    }
  }
  fclose(f1);
  printf("\nFile reading over!");
  return 0;
}