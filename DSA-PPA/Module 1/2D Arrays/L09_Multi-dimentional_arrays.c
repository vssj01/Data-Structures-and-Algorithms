#include <stdio.h>

int main()
{
    int i, j, k, arr[2][2][2] = {{{1, 0}, {0, 1}}, {{2, 0}, {0, 2}}};
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n"); // for each row
        }
        printf("********\n"); // each 2D array
    }

    return 0;
}
