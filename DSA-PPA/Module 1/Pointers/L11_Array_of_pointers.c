
#include <stdio.h>

int main()
{
    int *pointers[3];
    int x = 1, y = 2, z = 3;
    pointers[0] = &x;
    pointers[1] = &y;
    pointers[2] = &z;

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *pointers[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%lld ", pointers + i);
    }

    printf("\n");
    // printf("%lld %lld %lld\n", pointers[0], pointers[1], pointers[2]);
    printf("%lld %lld %lld\n", &x, &y, &z);
    for (int i = 0; i < 3; i++)
    {
        printf("%lld ", *(pointers + i));
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", **(pointers + i));
    }
    return 0;
}