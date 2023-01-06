#include <stdio.h>

int sum(int ara[], int i, int n)
{
    if (i == n)
        return 0;
    int s = sum(ara, i + 1, n);
    return s + ara[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("%d", sum(ara, 0, n));
    return 0;
}