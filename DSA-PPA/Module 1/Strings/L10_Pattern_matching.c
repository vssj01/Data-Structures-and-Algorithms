#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s %s", s1, s2);
    int l1 = 0, l2 = 0, i = 0, j;

    while (s1[i] != '\0')
    {
        i++;
        l1++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        i++;
        l2++;
    }
    int match = 0;
    for (i = 0; i <= l1 - l2; i++)
    {
        match = 1;
        for (j = 0; j <= i + l2; j++)
        {
            if (s1[j] != s2[j - i])
            {
                match = 0;
                break;
            }
        }
        if (match == 1)
            break;
    }

    if (match == 1)
        print("YES\n");
    else
        printf("NO\n");
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