#include <stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);

    int ara[n];

    int index = 0;

    for (i = 2; i <= n; i += 2)
    {
        ara[index] = i;

        index++;
    }

    for (i = 1; i <= n; i += 2)
    {
        ara[index] = i;

        index++;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }

    printf("\nThe %dth element in this sequence is %d.\n", k, ara[k - 1]);

    return 0;
}