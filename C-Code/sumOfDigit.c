#include <stdio.h>
int main()
{
    int n, i, div, digit, sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i *= 10)
    {
        div = n / i;
        digit = div % 10;
        sum += digit;
    }

    printf("%d", sum);

    return 0;
}