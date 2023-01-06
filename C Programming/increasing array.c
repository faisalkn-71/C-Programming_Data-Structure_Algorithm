#include <stdio.h>
int main()
{
    long long int n, i, ara[200003], moves = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &ara[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (ara[i] < ara[i - 1])
        {
            moves += (ara[i - 1] - ara[i]);
            ara[i] = ara[i - 1];
        }
        else
        {
            //
        }
    }

    printf("%lld", moves);
    return 0;
}