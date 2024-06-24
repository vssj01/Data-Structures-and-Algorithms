#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int t, isPresent = 0;
    scanf("%d", &t);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (t == mat[i][j])
            {
                isPresent = 1;
                printf("true");
                break;
            }
        }
    }
    if (isPresent == 0)
    {
        printf("false");
    }
    return 0;
}