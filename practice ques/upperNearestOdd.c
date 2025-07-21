// Program to Convert even number into its upper nearest odd number Switch Statement
#include "stdio.h"

    int
    main()
{
  int n;

  printf("enter num: ");
  scanf("%d", &n);

  switch (n % 2 == 0)
  {
  case 0:
    printf("%d is not even number.", n);
    break;
  case 1:
    printf("upper nearest odd is %d.", ++n);
    break;
  }

  return 0;
}