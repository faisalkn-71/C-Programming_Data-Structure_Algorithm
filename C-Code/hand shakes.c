#include <stdio.h>
int main()
{
    long long int n, i, j, count = 0;
    scanf("%lld", &n);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            count++;
        }
    }

    printf("%lld\n", count);
    return 0;
}