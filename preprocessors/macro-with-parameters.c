// Program to Calculate the Square of an Integer Using Macros and Print the Result.

#include <stdio.h>
#define SQR(x) ((x) * (x))
#define PRT printf

    int
    main()
{
  int m;
  printf("Enter an integer: ");
  scanf("%d", &m);
  PRT("Square of the number: %d", SQR(m));
  return 0;
}
