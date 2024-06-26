#include <stdio.h>

int main()
{
    // All the below qill throw ERRORS

    // cannot assign hard constant
    // int *x = &12;

    // cannot take const expression
    int a = 1, b = 2;
    // int *x = &(a + b);

    // cannot directly hardcode mem loc
    int *q = 194379279;

    return 0;
}
