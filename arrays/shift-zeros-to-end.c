#include "stdio.h"

// {1, 0, 5, 7, 0, 8}
// => {1, 5, 7, 8, 0, 0}

void moveZeroes(int *nums, int numsSize)
{
  int newArray[numsSize];
  int zeroCounter = 0;

  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] == 0)
      zeroCounter++;
    else
    {
      newArray[i - zeroCounter] = nums[i];
    }
  }

  for (int i = 0; i < numsSize; i++)
  {
    if (i >= numsSize - zeroCounter)
      newArray[i] = 0;
    printf("\n%d", newArray[i]);
  }
}

void moveZeroesSmart(int *nums, int numsSize)
{
  int lastNonZeroIndex = 0;

  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] != 0)
    {
      nums[lastNonZeroIndex] = nums[i];
      if (i != lastNonZeroIndex)
      {
        nums[i] = 0;
      }
      lastNonZeroIndex++;
    }
  }

  for (int i = 0; i < numsSize; i++)
  {
    printf("\n%d", nums[i]);
  }
}

int main()
{
  int array[6];

  printf("enter 6 random numbers:  ");
  for (int i = 0; i < 6; i++)
  {
    scanf("%d", &array[i]);
  }

  moveZeroesSmart(array, 6);
}
