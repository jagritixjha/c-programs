#include <stdio.h>

int main()
{
  char x;
  FILE *f1;
  f1 = fopen("data.txt", "w");
  printf("Enter contents of file : "); // ctrl + z hit enter to exit. :)
  while ((x = getchar()) != EOF)
  {
    fprintf(f1, "%c", x);
  }
  fclose(f1);
  printf("\nThe File is Created!");
  return 0;
}