#include <stdio.h>

int main()
{
    int n, m, i, j, k;
    scanf("%d %d\n", &n, &m);
    int A[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i + j == n - 1)
                sum += A[i][j];
        }
    }
    printf("%d", sum - A[n / 2][n / 2]);
    return 0;
}
