#include <stdio.h>

int main()
{
    int abc;
    scanf("%d", &abc);

    // Extract the digits
    int a = abc / 100;
    int b = (abc / 10) % 10;
    int c = abc % 10;

    // Calculate the sum of the digits
    int digit_sum = a + b + c;

    // Calculate the result by multiplying the digit sum by 111
    int result = digit_sum * 111;

    printf("%d\n", result);

    return 0;
}
