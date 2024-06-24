#include <stdio.h>
int main(void)
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    printf("%d \n", n == m);
    int mat[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("End of printing what is scanned\n");

    int res[m][n];
    if (n == 1 && m == 1)
    {
        printf("%d", mat[0][0]);
    }
    else if (n != m)
    {
        // non-square matrix

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                res[j][i] = mat[i][j];
            }
        }
    }
    else
    {
        printf("In Square matrix \n");
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                if (i == j)
                {
                    mat[i][j] += mat[j][i];
                    mat[j][i] = mat[i][j] - mat[j][i];
                    mat[i][j] = mat[i][j] - mat[j][i];
                }
            }
        }
    }
    if (n != m)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
