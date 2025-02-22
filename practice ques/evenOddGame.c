// wap to create a game to enter the even number if the player enters correct even in first attempt print "you won!! game over" if not then give in total 3 attempts to enter the correct even number if wrong number entered then  print "wrong even number entered".

#include "stdio.h"

int main()
{
  int evenNo = 1, i = 0;

  do
  {
    printf("\nenter any even number: ");
    scanf("%d", &evenNo);
    if (evenNo % 2 == 0)
    {
      printf("you won!!\ngame over ;)");
      break;
    }
    else
    {
      printf("\nwrong even number entered.");
    }
    i++;
  } while (i < 3);

  // other approach
  // do
  // {
  //   printf("\nenter any even number: ");
  //   scanf("%d", &evenNo);
  //   if (evenNo % 2 == 0)
  //     break;

  //   i++;
  // } while (i < 3);

  // if (i == 4)
  // // {
  // //   printf("you won!!\ngame over ;)");
  // // }
  // // else
  // {
  //   printf("you lost!!\ngame over");
  // }
}