#include <stdio.h>

int main()
{
  char x;
  FILE *f1, *f2;
  f1 = fopen("hollowDiam.c", "r");
  f2 = fopen("copied_data.txt", "w");
  // puts("Contents of the file : \n");
  while ((x = getc(f1)) != EOF)
  {
    fprintf(f2, "%c", x);
  }
  fclose(f1);
  fclose(f2);
  puts("\nFile copied!");
  return 0;
}