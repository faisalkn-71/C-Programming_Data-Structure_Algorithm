#include <stdio.h>
int main()
{
    int n, k, ara[55];
    int ans = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (ara[i] >= ara[k] && ara[i] > 0)
        {
            ans++;
        }
    }

    printf("%d", ans);
}