#include <stdio.h>
int main()
{
    int row = 3, col = 3;

    int ara[row][col];

    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", ara[j][i]);
        }
        printf("\n");
    }

    return 0;
}