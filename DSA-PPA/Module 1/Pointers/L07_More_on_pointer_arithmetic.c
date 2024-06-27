#include <stdio.h>

int main()
{
    // RULE 1: Constants may be added/sub from a ptr iff same datatype

    int x, *y = &x;
    printf("%lld %lld %lld\n", y, y - 2, y + 2);
    // output: 140720482924140 140720482924132 140720482924148

    // RULE 2: Multiplication/ division with constant NOT allowed
    // RULE 3: Comparision of 2 ptr is allowed

    int a, *b = &a;
    if (y < b)
    {
        printf("y < b");
    }

    // RULE 4: Add, Mul, Div of 2 ptr NOT allowed

    return 0;
}
