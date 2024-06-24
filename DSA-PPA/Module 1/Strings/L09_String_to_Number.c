#include<stdio.h>

int main() {
    char s[100] = "43567987";
    long long x =0;
    int len = 0, i =0;
    while(s[i] != '\0') {
        len++;
        i++;
    }
    len--;
    long long powerOfTen = 1;
    while(len>=0) {
        x += (s[len] - '0') * powerOfTen;
        len--;
        powerOfTen *= 10;
    }
    print("%lld\n", x);
    return 0;
}
// we can store a large number as a string
// how to add two number strings
// 43567987 = 7*10^0 + 8*10^1 + ......
// we need length
// '0' --> 48, '1' ---> 49, ...
// we need to extract '7' to make it int 7 to start applying our logic
// Ascii of 2 - Ascii of 0 ==> 50-48 = 2 we get the number in int

// if a number is -ve -> skip the first char which is - and then multiply the res num with -1