#include "stdio.h" 

int main()
{
  int h, m;
  printf("enter time(HH:MM) : ");
  scanf("%d:%d", &h, &m);
  printf("%d hour and %d minutes", h, m);
  return 0;
}