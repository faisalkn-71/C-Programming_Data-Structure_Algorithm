#include <stdio.h>
int main()
{
    int n, i, num1, t;

    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        scanf("%d", &n);

        num1 = n / 2;

        for (i = 1; i * 2 <= n; i++)
        {
            printf("%d %d ", i + num1, i);
        }

        if (n % 2 == 1)
        {
            printf("%d ", n);
        }
    }

    return 0;
}