<<<<<<< HEAD
// Program to Calculate the Square of an Integer Using Macros and Print the Result.

=======
// Program to Calculate the Square of an Integer Using Macros and Print the Result
>>>>>>> 3f13764 (preprocessors programs)
#include <stdio.h>
#define SQR(x) ((x) * (x))
#define PRT printf

<<<<<<< HEAD
    int
    main()
=======
int main()
>>>>>>> 3f13764 (preprocessors programs)
{
  int m;
  printf("Enter an integer: ");
  scanf("%d", &m);
  PRT("Square of the number: %d", SQR(m));
  return 0;
}
