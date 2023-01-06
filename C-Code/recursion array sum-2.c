#include <stdio.h>

int sum(int ara[], int n)
{
    if (n == 0)
        return 0;

    int s = sum(ara + 1, n - 1);
    return s + *(ara); // ara[0] and *(ara) are same thing.
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

    int ans = sum(ara, n);

    printf("%d ", ans);
    return 0;
}