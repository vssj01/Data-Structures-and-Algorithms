#include <stdio.h>
#include <string.h>

int main()
{
    char S[101], T[101];
    scanf("%s", S);
    scanf("%s", T);

    int lenS = strlen(S);
    int lenT = strlen(T);

    if (lenS != lenT)
    {
        printf("No\n");
        return 0;
    }

    // Create a new string which is S concatenated with itself
    char doubleS[202];
    strcpy(doubleS, S);
    strcat(doubleS, S);

    // Check if T is a substring of doubleS
    if (strstr(doubleS, T) != NULL)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
