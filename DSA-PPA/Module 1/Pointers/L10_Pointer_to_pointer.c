#include <stdio.h>

int main()
{
    int a = 5;
    int *b = &a;
    int **c = &b;

    printf("a, *b, **c: %d %d %d\n", a, *b, **c);
    printf("c, *c, **c: %lld %lld %d\n", c, *c, **c);
    printf("&b, &a: %lld %lld\n", &b, &a);

    return 0;
}
