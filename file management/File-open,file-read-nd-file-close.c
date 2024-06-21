/* Open, Read and close a file: reading string by string */

#include <stdio.h>
int main()
{
  FILE *fp;
  char data;
  printf("Opening the file some_text.txt in read mode");
  fp = fopen("some_text.txt", "r");

  if (fp == NULL)
  {
    printf("Could not open file some_text.txt");
    return 1;
  }

  printf("\n Reading the file some_text.txt\n");

  while ((data = getc(fp)) != EOF)
  {
    printf("%c", data);
  }

  printf("\nClosing the file some_text.txt");
  fclose(fp);
  return 0;
}