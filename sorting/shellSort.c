#include <stdio.h>
#define s 7

void shellSort(int[]);
void disp(int[]);

int main()
{
  int a[s] = {45, 23, 54, -454, 3, 0, -111};
  disp(a);
  shellSort(a);
  return 0;
}

void shellSort(int x[])
{
  int i, temp, gap = s / 2, flag, pass = 0;
  do
  {
    do
    {
      flag = 0;
      for (i = 0; i < s - gap; i++)
      {
        if (x[i] > x[gap + i])
        {
          temp = x[i];
          x[i] = x[gap + i];
          x[gap + i] = temp;
          flag++;
        }
      }
      printf("\nPass no. %d : ", ++pass);
      disp(x);
    } while (flag != 0);
    gap /= 2;
  } while (gap != 0);
}

void disp(int x[])
{
  for (int i = 0; i < s; i++)
  {
    printf("%d ", x[i]);
  }
}