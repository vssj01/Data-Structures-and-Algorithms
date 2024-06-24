#include <stdio.h>
// Mistakes I made
//  1. we do not need print stmts in bussiness lofic- stupid mistake
//  2. did not consider i==j case so it resulted in 0s in diagonal
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (i != j)
            {
                a[i][j] += a[j][i];
                a[j][i] = a[i][j] - a[j][i];
                a[i][j] = a[i][j] - a[j][i];
            }
            //  printf("%d",a[i][j]);
        }
        //      printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
