#include <stdio.h>

int main()
{
  int num = 5;
  printf("%d\n", sizeof(num));
  printf("%d\n", (-num));
  printf("%d\n", (+num));
  printf("%d\n", num++);
  printf("%d\n", ++num);
  printf("%d\n", num--);
  printf("%d\n", --num);

  // precedence rule ->     pre ==> normal ==> post
  // assocciativity rule ->    unary/arithmetic ==> r to l           others ==> l to r
  printf("%d", num++ + ++num - (-num) + --num - num--); // 4  +  5 +  5  + 4  -  5
  return 0;
}                                                                           