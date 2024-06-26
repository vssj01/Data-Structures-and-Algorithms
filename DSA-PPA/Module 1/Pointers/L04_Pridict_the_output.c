#include <stdio.h>

int main()
{
    int x = 5, y = 6;
    int *z = &x;
    printf("%d %d %d %lld\n", x, y, *z, z);
    *z = 0;
    printf("%d %d %d %lld\n", x, y, *z, z);
    z = &y;
    printf("%d %d %d %lld\n", x, y, *z, z);

    int a = 5;
    int *b = &a;
    printf("%d %lld %lld %d %d\n", a, &a, b, *b, *(&a));
    return 0;
}
