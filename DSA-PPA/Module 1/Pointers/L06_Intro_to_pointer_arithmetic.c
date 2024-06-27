#include <stdio.h>

int main()
{
    int x, *a = &x;
    char y, *b = &y;
    long long z, *c = &z;

    printf("%lld %lld %lld\n", a, b, c);
    printf("%lld %lld %lld\n", a + 1, b + 1, c + 1);

    return 0;
}

// int -> 4
// char -> 1
// long long -> 8