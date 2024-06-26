#include<stdio.h>

int main() {
    int x=9;
    int* y = &x;
    printf(" memory: %lld", y);
    printf("value frim pointer y is: %d", *y);
    return 0;
}
