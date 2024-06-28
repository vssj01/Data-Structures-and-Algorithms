
#include <stdio.h>

int main()
{
    int a[3] = {1, 2, 3};
    int *p = a;

    //  address of a[0], a[1], a[2]
    printf("%lld %lld %lld\n", p, p + 1, p + 2);

    // values at a[0], a[1], a[2]
    printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
    
    printf("%d %d %d\n", p[0], p[1], p[2]);
    return 0;
}