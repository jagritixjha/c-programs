#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fp;
  char data[50];

  printf("2227010701049\n");

  // opening an existing file
  printf("Opening the file some_text.txt in write mode\n");
  fp = fopen("some_text.txt", "w");
  if (fp == NULL)
  {
    printf("Could not open file some_text.txt\n");
    return 1;
  }

  printf("Enter some text from the keyboard to write in the file some_text.txt\n");
  // getting input from user
  while (fgets(data, sizeof(data), stdin))
  {
    // writing in the file
    fputs(data, fp);
    fputs("\n", fp);
  }

  // closing the file
  printf("Closing the file some_text.txt\n");
  fclose(fp);

  return 0;
}
