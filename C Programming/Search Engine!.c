#include <stdio.h>
int main()
{
    int t, a;
    scanf("%d", &t);
    for (a = 1; a <= t; a++)
    {
        int n, s, i, count, ans;
        scanf("%d", &n);
        int ara[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        scanf("%d", &s);
        count = 0;
        for (i = 0; i < n; i++)
        {
            if (ara[i] == s)
            {
                ans = i + 1;
                count = 1;
                break;
            }
        }

        if (count == 1)
        {
            printf("Case %d: %d\n", a, ans);
        }
        else
        {
            printf("Case %d: Not Found\n", a);
        }
    }

    return 0;
}