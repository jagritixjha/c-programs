#include "stdio.h"

void main()
{
  int array[5];
  printf("array = %d\n", array);   // base address(the first element)
  printf("&array = %d\n", &array); // base address along with whole blocks address
  printf("array+1 = %d\n", array + 1);
  printf("&array+1 = %d", &array + 1);
}

/*

array	      ==> Address of array[0](first element)  ==>	int*          ==> 1000
&array      ==> Address of the entire array block	  ==> int (*)[5]    ==> 1000
array + 1	  ==> Address of array[1]                 ==>	int*	        ==> 1004
&array + 1  ==>	Address after the entire array	    ==> int (*)[5]    ==>	1020

=> array is a pointer to the first element. It treats the array as a collection of elements.
=> &array is a pointer to the whole array block. It treats the entire array as a single unit.
*/