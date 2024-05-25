#include <stdio.h>
struct Point
{
  int x;
  int y;
};

struct Point addPoints(struct Point p1, struct Point p2)
{
  struct Point result;
  result.x = p1.x + p2.x;
  result.y = p1.y + p2.y;
  return result;
}

int main()
{
  struct Point point1 = {3, 4};
  struct Point point2 = {7, 9};
  struct Point sum = addPoints(point1, point2);
  printf("Sum of points: (%d, %d)\n", sum.x, sum.y);
  return 0;
}
