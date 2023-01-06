#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d%d", &row, &col);

    int ara[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    if (row == col)
    {
        int flag = 1, temp = ara[0][0];
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j && ara[i][j] == temp)
                {
                    continue;
                }
                else if (ara[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
        if (flag == 1)
        {
            printf("Scalar.\n");
        }
        else
        {
            printf("Not Scalar.\n");
        }
    }
    else
    {
        printf("Not Scalar.\n");
    }

    return 0;
}