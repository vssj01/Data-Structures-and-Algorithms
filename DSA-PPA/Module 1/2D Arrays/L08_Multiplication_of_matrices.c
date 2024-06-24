#include <stdio.h>
// forgot to initialse C[i][j] = 0
int main()
{
    int m, n, p, i, j, k;
    // scand m,n,p
    scanf("%d %d %d", &m, &n, &p);
    // scan matrices A,B
    int A[m][n], B[n][p];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // initialise C - logic
    int C[m][p];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {

                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("************\n");
    // display C
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
