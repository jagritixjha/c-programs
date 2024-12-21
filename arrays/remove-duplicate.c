// Remove Duplicates from Sorted Array

#include <stdio.h>

int removeDuplicate(int *nums, int numSize)
{
  int temp[1000] = {0}; // hashing
  int count = 0;

  for (int i = 0; i < numSize; i++)
  {
    temp[nums[i]]++;
  }

  for (int i = 0; i < 1000; i++)
  {
    if (temp[i] != 0)
    {
      nums[count] = i;
      count++;
    }
  }
  return count;
}

int main()
{
  int ar[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  for (int i = 0; i < removeDuplicate(ar, 10); i++)
  {
    printf("%d\n", ar[i]);
  }
}