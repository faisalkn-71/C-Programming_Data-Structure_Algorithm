#include <stdio.h>
int main()
{
    long long int n, k, a;
    scanf("%lld %lld", &n, &k);

    if (n % 2 == 1)
        a = (n / 2) + 1;
    else
        a = n / 2;

    long long int value;

    if (k > a)
    {
        value = (k - a) * 2;
    }
    else
    {
        value = (k * 2) - 1;
    }

    printf("%lld", value);

    return 0;
}