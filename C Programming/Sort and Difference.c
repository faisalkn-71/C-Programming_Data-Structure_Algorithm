#include <stdio.h>

int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int ara[n], ara2[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara2[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ara[j] > ara[j + 1])
            {
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ara2[j] < ara2[j + 1])
            {
                temp = ara2[j];
                ara2[j] = ara2[j + 1];
                ara2[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i] - ara2[i]);
    }

    return 0;
}