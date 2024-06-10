#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  printf("\nTotal no. of arguments = %d\n", argc);

  for (i = 1; i < argc; i++)
  {
    puts(argv[i]);
  }
}

// argc (ARGument Count) is an integer variable that stores the number of command-line arguments passed by the user including the name of the program.

// argv(ARGument Vector) is an array of character pointers listing all the arguments.

// If argc is greater than zero, the array elements from argv[0] to argv[argc - 1] will contain pointers to strings.

// argv[0] is the name of the program, After that till argv[argc - 1] every element is command - line arguments.