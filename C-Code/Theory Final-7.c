#include <stdio.h>
int main()
{
    int n, m, i, j;

    scanf("%d %d", &n, &m);

    int ara[n][m], ara2[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", ara[i][j] + ara2[i][j]);
        }
        printf("\n");
    }

    return 0;
}