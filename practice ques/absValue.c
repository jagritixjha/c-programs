/* Program to convert a positive number into a negative number and negative numbe into a positive number using a switch statement and also without switch case. */

#include "stdio.h"

    int
    main(){
  int n;
  
  printf("enter num: ");
  scanf("%d", &n);
  
  // with switch case
  switch(n>0){
    case 0:n= -n;
    break;
    case 1: n = -n;
    break;
  }

  // without switch case
  // n = -n;

  printf("%d",n);


  return 0;
}