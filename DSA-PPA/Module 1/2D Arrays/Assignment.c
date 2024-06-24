#include <stdio.h>

int main()
{
    int n1, m1, n2, m2, i, j, k;
    scanf("%d %d\n", &n1, &m1);
    int A[n1][m1];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d\n", &n2, &m2);
    int B[n2][m2];
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // What about 0?
    if (m1 != n2)
    {
        printf("IMPOSSIBLE");
    }
    else
    {
        int C[n1][m2];
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < n2; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", C[i][j]);
            }
        }
    }

    return 0;
}