#include <stdio.h>

int main(int argc, char *argv[])
{

  FILE *f1;
  char x;
  f1 = fopen(argv[1], "r");
  while ((x = getc(f1)) != EOF)
  {
    printf("%c", x);
  }
  fclose(f1);
  puts("\nFile read successfully!");
}