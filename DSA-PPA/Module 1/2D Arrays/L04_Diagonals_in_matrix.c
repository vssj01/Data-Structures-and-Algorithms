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
            scanf("%d", &A[i][j]);
        }
    }
    // using normal for loop and if
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                ans += A[i][j];
            }
        }
    }

    // using for loop and without if
    ans = 0;
    for (i = 0; i < n; i++)
    {
        ans += A[i][i];
    }

    // using while
    ans = 0, i = 0, j = 0;
    while (i < n)
    {
        ans += A[i][i];
        i++;
        j++;
    }

    // ans = 0;
    // // TODO: left diagonal
    // for (i = 0; i < n; i++)
    // {
    //     for (j = n - 1; j >= 0; j--)s
    //     {
    //         // ans += A[i][j];
    //         if (i + j == n - 1)
    //         {
    //             ans += A[i][j];d
    //         }
    //     }
    // }
    // TODO: sum of both diagonals
    printf("%d\n", ans);
    return 0;
}
