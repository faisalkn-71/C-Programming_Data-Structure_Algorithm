#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (int space = 0; space <= i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}