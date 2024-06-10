#include <stdio.h>

int main(int agrc, char *argv[])
{
  char x;
  FILE *f1, *f2;
  f1 = fopen(argv[1], "r");
  f2 = fopen(argv[2], "w");

  while ((x = getc(f1)) != EOF)
  {
    printf("%c", x);
    putc(x, f2);
  }
  fclose(f1);
  fclose(f2);
  puts("\nFile read and copied successfully!");
}