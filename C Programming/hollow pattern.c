#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Please, enter a number: ");
    scanf("%d", &n);

    for (j = 1; j <= n; j++)
    {
        printf("#");
    }
    printf("\n");

    for (i = 1; i <= n - 2; i++)
    {
        printf("#");
        for (j = 1; j <= n - 2; j++)
        {
            printf(" ");
        }
        printf("#\n");
    }

    for (j = 1; j <= n; j++)
    {
        printf("#");
    }
    printf("\n");

    return 0;
}