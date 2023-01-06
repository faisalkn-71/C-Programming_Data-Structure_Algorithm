#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int i, sum = 0, sum2 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (ara[i] > 0)
        {
            sum += ara[i];
        }
        else if (ara[i] < 0)
        {
            sum2 = sum2 + ara[i];
        }
    }

    printf("%d\n", sum + sum2);

    return 0;
}