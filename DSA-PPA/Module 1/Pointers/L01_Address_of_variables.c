#include<stdio.h>

int main() {
    int x = 9, y =10;
    printf("%p\n", &x);
    printf("%lld %lld\n", &x, &y);
    return 0;
}
