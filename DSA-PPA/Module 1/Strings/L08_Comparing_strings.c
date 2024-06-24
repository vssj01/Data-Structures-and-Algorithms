#include <stdio.h>
// compare 2 string
int main()
{
    char sentence1[100];
    char sentence2[100];
    scanf("%s %s", sentence1, sentence2);
    int i = 0;
    while (sentence1[i] != '\0' && sentence2[i] != '\0')
    {
        if (sentence1[i] != sentence2[i])
        {
            break;
        }
        i++;
    }

    if (sentence1[i] == '\0' && sentence2[i] == '\0')
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
