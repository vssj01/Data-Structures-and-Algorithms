#include <stdio.h>
#include <string.h>

int main()
{
    char S[21];
    scanf("%s", S);

    int len = strlen(S);

    // Check if the string ends with "er"
    if (len >= 2 && strcmp(S + len - 2, "er") == 0)
    {
        printf("er\n");
    }
    // Check if the string ends with "ist"
    else if (len >= 3 && strcmp(S + len - 3, "ist") == 0)
    {
        printf("ist\n");
    }

    return 0;
}
