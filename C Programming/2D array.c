#include <stdio.h>
int main()
{
    int n, m, i, j;

    scanf("%d %d", &n, &m);

    int ara[n][m];

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
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }

    return 0;
}