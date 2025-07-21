/*
Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition. Using the switch statement.

  For the first 50 units Rs. 0.50/unit
  For the next 100 units Rs. 0.75/unit
  For the next 100 units Rs. 1.20/unit
  For units above 250 Rs. 1.50/unit
  
An additional surcharge of 20% is added to the bill.
*/

#include <stdio.h>

void main()
{
  float u, bill = 0;

  printf("enter unit: ");
  scanf("%f", &u);

  // BY ELSE-IF LADDER STATEMENT
  /*   if (u <= 50)
    { // for first 50 units
      bill = u * 0.50;
    }
    else if (u <= 150)
    { // for next 100 units
      // bill = 50 * 0.50;
      // bill += (u - 50) * 0.75; shorthand ⬇️
      bill = 25 + (u - 50) * 0.75;
    }
    else if (u <= 250)
    { // for next 100 units
      // bill = 50 * 0.50;
      // bill += 100 * 0.75;
      // bill +=(u - 150) * 1.20; shorthand ⬇️
      bill = 100 + (u - 150) * 1.20;
    }
    else
    { // for next 250 unit
      // bill = 50 * 0.50;
      // bill += 100 * 0.75;
      // bill += 100 * 1.20;
      // bill += (u - 250) * 1.50; shorthand ⬇️
      bill = 220 + (u - 250) * 1.50;
    } */


  // BY SWITCH CASE STATEMENT
  switch (u <= 50)
  {
  case 0:
    switch (u <= 150)
    {
    case 0:
      switch (u <= 250)
      {
      case 0:
        bill = 220 + (u - 250) * 1.50;
        break;
      case 1:
        bill = 100 + (u - 150) * 1.20;
        break;
      }
      break;
    case 1:
      bill = 25 + (u - 50) * 0.75;
      break;
    }
    break;
  case 1:
    bill = u * 0.50;
    break;
  }

  // surcharge of 20% on the bill
  bill *= 1.20;

  printf("bill is of %.2f rs.", bill);
  return 0;
}