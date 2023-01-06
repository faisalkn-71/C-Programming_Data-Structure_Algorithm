#include <stdio.h>
int main()
{
    int n, i, temp, j, ans = 0, even = 0;
    scanf("%d", &n);

    int ara[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[i] < ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (ara[i] % 2 == 0)
        {

            ans = ara[i];
            break;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[i] != ara[j] && (ara[i] + ara[j]) > ans && (ara[i] + ara[j]) % 2 == 0)
            {
                ans = ara[i] + ara[j];
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}