#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    char str[5];
    snprintf(str, 5, "%d", N); // Convert the integer to a string

    int len = strlen(str); // Get the length of the converted string

    // If the length is less than 4, prepend leading zeros
    if (len < 4)
    {
        char result[5];
        memset(result, '0', 4 - len);    // Fill the buffer with leading zeros
        strcpy(result + (4 - len), str); // Copy the original number to the right place
        result[4] = '\0';                // Null-terminate the string
        printf("%s\n", result);
    }
    else
    {
        // If the length is already 4, just print the original string
        printf("%s\n", str);
    }

    return 0;
}
