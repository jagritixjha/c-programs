#include <stdio.h>
#define size 10

int a[size], pocket[10][size];

void init() // just to set -1 as vacant place in pocket.
{
  int i, j;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < size; j++)
    {
      pocket[i][j] = -1;
      // printf("%d ", pocket[i][j]);
    }
    // printf("\n");
  }
}

void setElements() // to take values from the user for the first time
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("Enter ele : ");
    scanf("%d", &a[i]);
  }
}

int passes() // calculate passes finds the max number and calculate the total digits and return to main
{
  int i, max = a[0], digits = 0;
  for (i = 1; i < size; i++)
  {
    if (max < a[i])
    {
      max = a[i];
    }
  }
  // printf("max = %d\n", max);
  while (max != 0)
  {
    max /= 10;
    digits++;
  }
  // printf("digits = %d\n", digits);
  return digits;
}

int findPocket(int ele, int pass) // this function finds the pocket address and returns to main.
{
  int i, p;
  for (i = 0; i < pass - 1; i++)
  {
    ele /= 10;
  }
  p = ele % 10; // gives pocket where ele will be kept
  return p;
}

void placePocket(int ele, int p) // this function finds the vacant place and sets the element to that index.
{
  int j;
  for (j = 0; j < size; j++)
  {
    if (pocket[p][j] == -1)
    {
      pocket[p][j] = ele;
      return;
    }
  }
}

void empty() // this function empties all the elements (non negative) from the pocket and places it back to the main arrya.
{
  int i, j, k = 0;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (pocket[i][j] != -1)
      {
        a[k++] = pocket[i][j];
        pocket[i][j] = -1; // important
      }
    }
  }
}

void display()
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", a[i]);
  }
}

int main()
{
  int i, j, pass, pocket;
  init();
  setElements();
  pass = passes();
  for (i = 1; i <= pass; i++) // passes
  {
    for (j = 0; j < size; j++)
    {
      pocket = findPocket(a[j], i);
      placePocket(a[j], pocket);
    }
    empty();
    printf("\nPass no. %d : ", i);
    display();
  }
  return 0;
}