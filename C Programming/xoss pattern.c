#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i, j;

    for (j = 1; j <= n; j++)
    {
        printf("%d", j);
    }
    printf("\n");

    if (n > 1)
    {
        for (i = 1; i < n - 1; i++)
        {
            printf("%d", i + 1);

            for (j = 1; j <= n - 2; j++)
            {
                printf(" ");
            }

            printf("%d", n);
            printf("\n");
        }

        for (j = 1; j <= n; j++)
        {
            printf("%d", n);
        }
    }
    return 0;
}