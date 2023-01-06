#include <stdio.h>
int main()
{
    int n, x, i, ara[200001];

    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        // printf("%dth position --> %d\n", i, ara[i]);

        scanf("%d", &x);

        ara[x] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        // printf("%dth position --> %d\n", i, ara[i]);
        // printf("Testing %dth position\n", i);

        if (ara[i] == 0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}