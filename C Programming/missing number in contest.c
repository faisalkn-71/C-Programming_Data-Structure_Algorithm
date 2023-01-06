#include <stdio.h>
int main()
{
    long long int i, t, ans, sum = 0;
    scanf("%lld", &t);

    for (int k = 0; k < t; k++)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        ans = a - (b + c + d);
        printf("%lld \n", ans);
    }

    return 0;
}