#include <stdio.h>

int main()
{
    char word[100] = "abCdEfghI";
    int i;
    for (i = 1; i < word[i] != '\0'; i++)
    {
        int j = i;
        while (j > 0 && word[j] < word[j - 1])
        {
            char temp = word[j];
            word[j] = word[j - 1];
            word[j - 1] = temp;
            j--;
        }
    }
    printf("%s\n", word);
    return 0;
}

// Output is -> CEIabdfgh