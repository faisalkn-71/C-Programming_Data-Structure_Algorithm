#include <stdio.h>
int main()
{
    int t, k;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        int N, i;
        scanf("%d", &N);

        int ara[N];
        for (i = 0; i < N; i++)
        {
            scanf("%d", &ara[i]);
        }

        int diff, ans, min = 100;

        for (i = 0; i < N; i++)
        {
            diff = 100 - ara[i];

            if (diff < min)
            {
                min = diff;
                ans = ara[i];
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}