#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int max = ara[0];

    for (i = 0; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", max - ara[i]);
    }

    return 0;
}