#include <stdio.h>

int sum_odd_even(int n, int ara[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0 && ara[i] % 2 == 0)
        {
            sum += ara[i] + (i + 1);
        }
        else if ((i + 1) % 2 == 1 && ara[i] % 2 == 1)
        {
            sum += ara[i] + (i + 1);
        }
        else
        {
            sum += 0;
        }
    }
    return sum;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int ans = sum_odd_even(n, ara);

    printf("%d", ans);

    return 0;
}
