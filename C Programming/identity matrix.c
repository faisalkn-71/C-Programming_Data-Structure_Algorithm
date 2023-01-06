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

        int flag = 1, temp = 1;
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
            printf("Indentity.\n");
        }

        else
        {
            printf("Not Identity.\n");
        }
    }
    else
    {
        printf("Not Identity.");
    }

    return 0;
}