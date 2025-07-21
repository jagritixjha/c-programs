#include <stdio.h>

int main()
{

  for (int i = 'A'; i <= 'E'; i++)
  {
    for (int j = 'A'; j <= 'E'; j++)
    {
      if (j >= i)
        printf("%c", j);
      else
        printf(" ");
    }
    printf("\n", i);
  }

  return 0;
}