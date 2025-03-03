#include "stdio.h"

int main(){
  // EXAMPLE 1
  int *ptr = (int *)malloc(sizeof(int));
 free(ptr);

  // ptr is a dangling pointer now and operations like following are invalid
  // *ptr = 10; 
  // or 
  //printf("%d", *ptr);

}