// program to compare two strings character by character and report their ASCII differences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Remove newline characters if present
    if (str1[len1 - 1] == '\n')
    {
        str1[len1 - 1] = '\0';
    }
    if (str2[len2 - 1] == '\n')
    {
        str2[len2 - 1] = '\0';
    }

    int i = 0;
    while (str1[i] && str2[i])
    {
        int diff = str1[i] - str2[i];
        printf("Difference at position %d: %d\n", i, diff);
        i++;
    }

    // Handle the case where the strings have different lengths
    while (str1[i])
    {
        printf("Difference at position %d: %d\n", i, str1[i] - '\0');
        i++;
    }
    while (str2[i])
    {
        printf("Difference at position %d: %d\n", i, '\0' - str2[i]);
        i++;
    }
    return 0;
}
