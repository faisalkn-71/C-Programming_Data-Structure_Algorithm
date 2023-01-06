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

    for (j = 0; j < col; j++)
    {
        for (i = 0; i < row; i++)
        {
            printf("%d ", ara[i][j]);
        }

        printf("\n");
    }
}