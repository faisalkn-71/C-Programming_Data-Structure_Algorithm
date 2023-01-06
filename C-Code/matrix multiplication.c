#include <stdio.h>
int main()
{
    int row, col, i, j, k;
    scanf("%d%d", &row, &col);

    int ara1[row][col], ara2[row][col], result[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                result[i][j] += (ara1[i][k] * ara2[k][j]);
            }
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}