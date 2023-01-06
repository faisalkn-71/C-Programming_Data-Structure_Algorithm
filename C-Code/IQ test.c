#include <stdio.h>
int main()
{
    int n, i, ara[105], ans, evenCount = 0, oddCount = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);

        if (ara[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (evenCount == 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (ara[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (ara[i] % 2 == 1)
            {
                ans = i;
            }
        }
    }

    printf("%d", ans);
    return 0;
}