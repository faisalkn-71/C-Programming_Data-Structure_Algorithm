#include <stdio.h>
int main()
{
    int n, k, i;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    scanf("%d", &k);

    for (i = k; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}