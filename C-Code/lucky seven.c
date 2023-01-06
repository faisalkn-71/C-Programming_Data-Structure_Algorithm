#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    // printf("Enter  the string : ");
    while (t--)
    {
        char s[20];
        int i, n, c = 0;

        scanf("%s", s);
        n = strlen(s);

        for (i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                c++;
        }
        if (c == i)
            if (n > 7)
            {
                printf("Case #2: %c%d%c\n", s[0], n - 2, s[n - 1]);
            }

            else
            {
                printf("Case #3: %s\n", s);
            }
        else
            printf("Case #1: Not Palindrome\n");
    }

    return 0;
}