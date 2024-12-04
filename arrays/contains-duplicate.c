#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int *nums, int numsSize)
{
  for (int i = 0; i < numsSize; i++)
  {
    for (int j = i + 1; j < numsSize; j++)
    {
      if (nums[i] == nums[j])
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{
  int array[6] = {1, 4, 2, 5, 1, 8};

  printf(containsDuplicate(array, 6) ? "true" : "false");
}