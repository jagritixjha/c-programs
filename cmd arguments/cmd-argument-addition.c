#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int sum = 0, i;
  if (argc <= 2)
  {
    printf("Enter appropriate number of arguments to calculate sum\n");
    exit(0);
  }
  else
  {
    for (i = 1; i < argc; i++)
    {
      sum += atoi(argv[i]);
    }
  };
  printf("Sum of all command line arguments is %d", sum);
  return 0;
}