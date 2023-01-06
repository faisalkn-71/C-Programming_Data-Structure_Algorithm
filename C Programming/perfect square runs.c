#include <stdio.h>
#include <math.h>

int main()
{
    int t, k;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        int N, i, count = 0;
        scanf("%d", &N);

        int ara[N];

        for (i = 0; i < N; i++)
        {
            scanf("%d", &ara[i]);
        }

        for (i = 0; i < N; i++)
        {
            float ans = sqrt(ara[i]);
            int ans1 = ans;

            float diff = ans - ans1;

            if (diff == 0)
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}