#include <stdio.h>
int main()
{
    long long int n, i, div = 1, count = 0;
    scanf("%lld", &n);

    for (i = 1; i <= n; i *= 10)
    {
        div = n / i;
        long long int digit = div % 10;
        count++;
    }

    printf("%lld digits.\n", count);
    return 0;
}