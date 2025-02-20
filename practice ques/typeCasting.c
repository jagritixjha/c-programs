#include <stdio.h>

int main()
{
  int a = 12;
  float b = 2.12;
  printf("%f", a + b);          // ✅ Correct: "%f" for float output
  printf("\n%d", a + b);        // ❌ Incorrect: "%d" for float output (causes garbage)}
  printf("\n%d", (int)(a + b)); // ✅ Correct: explicit casting
  printf("\n%d", b);            // ❌ Incorrect:  Implicit Type Conversion: In arithmetic, int is promoted to float (a + b → float), but printf does not automatically convert it.
}