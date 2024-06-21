#include <stdio.h>
int main()
{
  printf("2227010701049\n");
  FILE *fptr;
  fptr = fopen("fprintf_test.txt", "w"); // "w" defines "writing mode"
  /* write to file */
  fprintf(fptr, "Learning C with Guru99\n");
  fclose(fptr);
  return 0;
}