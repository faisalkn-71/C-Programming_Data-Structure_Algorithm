#include <stdio.h>
int main()
{
    int i, j, x, y;
    int ara[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &ara[i][j]);

            if (ara[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int ans, row_chang, col_chang;

    if (x > 2)
    {
        row_chang = (x - 2);
    }

    else
    {
        row_chang = (2 - x);
    }

    if (y > 2)
    {
        col_chang = (y - 2);
    }

    else
    {
        col_chang = (2 - y);
    }

    ans = row_chang + col_chang;

    printf("%d", ans);

    return 0;
}