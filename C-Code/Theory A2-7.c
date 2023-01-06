#include <stdio.h>

float median_value(int ara[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    if (n % 2 == 1)
    {
        return ara[n / 2];
    }
    else if (n % 2 == 0)
    {
        return (ara[n / 2] + ara[n / 2 - 1]) / 2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];

    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("%0.2f\n", median_value(ara, n));

    return 0;
}