#include <stdio.h>

int total_count()
{
    int n, k, count = 0;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        if (ara[i] != k)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int ans = total_count();

    printf("ans = %d\n", ans);

    return 0;
}