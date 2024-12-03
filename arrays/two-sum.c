#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

  for (int i = 0; i < numsSize; i++)
  {
    for (int j = i + 1; j < numsSize; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        returnSize[0] = i;
        returnSize[1] = j;
      }
    }
  }

  for (int i = 0; i < 2; i++)
  {
    printf("%d  ", returnSize[i]);
  }
}

void main()
{
  int array[4] = {3, 3, 2, 5}, target = 6;
  int newArray[2];

  twoSum(&array, 4, target, &newArray);
}