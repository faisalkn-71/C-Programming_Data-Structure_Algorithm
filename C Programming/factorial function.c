#include <stdio.h>

int fact(int n);
int main()
{
    int n;
    scanf("%d", &n);

    int ans = fact(n);
    printf("%d\n", ans);
    return 0;
}

int fact(int n)
{
    int fact = 1, i;

    for (i = n; i >= 1; i--)
    {
        fact *= i;
    }

    return fact;
}