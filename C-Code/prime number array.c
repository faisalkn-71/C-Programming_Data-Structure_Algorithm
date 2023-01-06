#include <stdio.h>
int main()
{
    int i, j, n, count;

    scanf("%d", &n);

    int ara[n], ara2[n], k = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 2; j < ara[i]; j++)
        {
            if (ara[i] % j == 0)
            {
                count += 1;
                break;
            }
        }

        if (count == 0)
        {
            ara2[k] = ara[i];
            k++;
        }
    }

    printf("%d\n", k);
    for (i = 0; i < k; i++)
    {
        printf("%d ", ara2[k]);
    }

    return 0;
}