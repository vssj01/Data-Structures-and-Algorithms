#include <stdio.h>

int main()
{
    int t;
    scanf("%d ", &t);

    while (t--)
    {
        char a[200];
        scanf("%s", a);

        int car = 0;
        int len = 0;

        for (int j = 0; a[j] != '\0'; j++)
        {
            len++;
        }
        len--;

        for (int k = len; k >= 0; k--)
        {

            if (k == len || car > 0)
            {
                char z = a[k];
                if (a[k] == '9')
                {
                    a[k] = '0';
                    car++;
                }
                else
                {
                    z++;
                    a[k] = z;
                    car = 0;
                }
            }
        }

        if (car > 0)
        {
            printf("1");
        }

        printf("%s\n", a);
    }

    return 0;
}
