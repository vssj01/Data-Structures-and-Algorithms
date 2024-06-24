#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int A[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &A[i][j]);
        }
    }

    // Lower Triangle Part
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("******\n");
    // Upper Triangle Part without spaces
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("******\n");
    // Upper triangle with spaces
    for (i = 0; i < n; i++)
    {
        int count = 0;
        count = i * 2;
        while (count--)
        {
            printf(" ");
        }
        for (j = i; j < n; j++)
        {

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
