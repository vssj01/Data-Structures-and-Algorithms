#include <stdio.h>

int main()
{
    int x = 9;
    int *a = &x;
    int *b = &x;
    int *c = &x;
    printf("%d %lld %lld %lld \n", x, *a, *b, *c);
    *c = 11;
    printf("%d %lld %lld %lld \n", x, *a, *b, *c);

    return 0;
}
