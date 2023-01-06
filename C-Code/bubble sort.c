#include <stdio.h>
int main()
{
    int n = 7, i, j, temp;
    int ara[7] = {12, 7, 10, 3, 15, 2, 4};

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }

        for (i = 0; i < n; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }
}