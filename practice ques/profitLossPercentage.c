#include "stdio.h"

int main()
{
  double sp, cp, percentage;
  printf("product selling price : ");
  scanf("%lf", &sp);
  printf("product cost price : ");
  scanf("%lf", &cp);
  percentage = ((sp - cp) / cp) * 100;

  if (percentage > 0)
  {
    printf("profit percentage is = %.2f", percentage);
  }
  else if (percentage < 0)

  {
    printf("loss percentage is = %.2f", percentage);
  }
  else
  {
    printf("no profit, no loss");
  }
}