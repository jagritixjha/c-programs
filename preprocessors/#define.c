// Program to Calculate the Area of a Circle Using Macros and Print the Result.

#include <stdio.h>
// object like macro
#define PI 3.14
// function like macro
#define Area(r) (PI * (r * r))
void main()
{
  // declaration and initialization of radius
  float radius = 2.5;
  // declaring and assigning the value to area
  float area = Area(radius);
  // Printing the area of circle
<<<<<<< HEAD
  printf("Area of circle is %f\n", area);

  // Using radius as int data type
  int radiusInt = 5;
  printf("Area of circle is %f", Area(radiusInt));
=======
  printf("Area of circle is %.2f\n", area);

  // Using radius as int data type
  int radiusInt = 5;
  printf("Area of circle is %.2f", Area(radiusInt));
>>>>>>> 3f13764 (preprocessors programs)
}
