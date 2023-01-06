#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int ara[n];

    for (i = 0; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int max = ara[0];

    for (i = 1; i <= n; i++)
    {
        if (max < ara[i])
        {
            max = ara[i];
        }
    }

    printf("The maximum value of this array is: %d\n", max);

    return 0;
}