#include <stdio.h>
#include <stdbool.h>

void printCell(int ara[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // printf("%d ", ara[i][j]);
            if (ara[i][j] == -1)
                printf(" ");

            if (ara[i][j] == 1)
                printf("X");
            if (ara[i][j] == 2)
                printf("O");

            if (j < n)
                printf("\t|\t");
        }
        printf("\n");
        if (i < n)
            printf("___________________________________");
        printf("\n\n");
    }
}

int main()
{
    int n = 3;
    int ara[4][4];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ara[i][j] = -1;
        }
    }

    bool player1 = true;
    bool player2 = false;

    while (true)
    {
        printCell(ara, n);
        if (player1)
        {
            int row, col;
        Flag:
            printf("Player 1  Turn (X), Enter Row and Column: ");
            scanf("%d %d", &row, &col);
            if (ara[row][col] != -1)
            {
                printf("Invalid Cell!\n");
                goto Flag;
            }
            ara[row][col] = 1;
            player1 = false;
            player2 = true;
        }

        else
        {
            int row, col;
        Flag2:
            printf("Player 2  Turn (O), Enter Row and Column: ");
            scanf("%d %d", &row, &col);
            if (ara[row][col] != -1)
            {
                printf("Invalid Cell!\n");
                goto Flag2;
            }
            ara[row][col] = 2;
            player1 = true;
            player2 = false;
        }
    }
    // code finish
    return 0;
}