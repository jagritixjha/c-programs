#include <stdio.h>

int main()
{
  char x;
  FILE *f1;
  f1 = fopen("data.txt", "r");
  puts("Contents of the file : \n");
  while ((x = getc(f1)) != EOF)
  {
    printf("%c", x);
  }
  fclose(f1);
  puts("\nFile reading over !");
  return 0;
}