#include "stdio.h"

void primeFactors(int n){
  for (int i = 2; n!=1; i++)
  {
    while(n%i==0) 
    {
      n /= i;
      printf("%d ", i);
      // printf("*%d ", n);
    }
  }
}


int main(){
  int n;
  printf("enter num: ");
  scanf("%d", &n);

  primeFactors(n);
  return 0;
}