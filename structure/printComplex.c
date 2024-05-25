#include <stdio.h>

struct complex
{
  int real;
  int img;
};

int main()
{
  struct complex num = {5, 8};
  struct complex *ptr = &num;
  printf("real part is: %d\n", ptr->real);
  printf("img part is: %d", ptr->img);
}