#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int i;

    for (i = 0; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i <= n; i++)
    {
        printf("Value of %d position = %d\n", i, ara[i]);
    }

    return 0;
}