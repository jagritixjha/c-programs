// program to display printable ASCII characters and their integer values, formatted neatly across multiple lines.

#include <stdio.h>

int main(void)
{
  puts("Printable ASCII:");
  int chars_printed = 0; // Initialize a character count

  for (int i = 32; i < 127; ++i)
  {
    // printf the character and its corresponding integer value
    printf("%c = %d", i, i);
    chars_printed += 6; // Assuming each character takes up 6 characters in the output

    // Check if it's time to insert a newline
    if (chars_printed >= 30)
    {
      putchar('\n');
      chars_printed = 0; // Reset the character count for the next line
    }
    else
    {
      printf("\t\t"); // Insert a space between characters on the same line
    }
  }
  return 0;
}