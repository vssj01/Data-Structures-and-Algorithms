#include <stdio.h>
#include <string.h>

int main()
{
    char S[101];
    scanf("%s", S);

    int len = strlen(S);
    int hugs_needed = 0;

    // Compare characters from the start and end towards the center
    for (int i = 0; i < len / 2; i++)
    {
        if (S[i] != S[len - i - 1])
        {
            hugs_needed++;
        }
    }

    printf("%d\n", hugs_needed);

    return 0;
}
