#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);

    int ara[row][col];

    int i, j, rwoSum, colSum, diagonalSum;

    int count = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    diagonalSum = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            if (i == j)
            {
                diagonalSum = diagonalSum + ara[i][j];
            }
        }
    }

    for (i = 0; i < row; i++)
    {

        rwoSum = 0;

        for (j = 0; j < row; j++)
        {
            rwoSum = rwoSum + ara[i][j];
        }

        if (diagonalSum == rwoSum)
        {
            count = 0;
        }
        else
        {
            count = 1;
            break;
        }
    }

    for (i = 0; i < row; i++)
    {
        colSum = 0;

        for (j = 0; j < row; j++)
        {
            colSum = colSum + ara[j][i];
        }

        if (diagonalSum == colSum)
        {
            count = 0;
        }
        else
        {
            count = 1;
            break;
        }
    }

    if (count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}