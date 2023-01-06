#include <stdio.h>
int main()
{
    int n, i, k, count = 0;
    scanf("%d", &n);

    scanf("%d", &k);

    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (ara[i] < k)
        {
            count++;
        }
    }

    printf("%d \n", count);

    return 0;
}