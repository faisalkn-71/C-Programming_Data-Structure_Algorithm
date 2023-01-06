#include <stdio.h>
int main()
{
    int t, k, n, i;
    scanf("%d", &t);

    for (k = 0; k < t; k++)
    {
        scanf("%d", &n);

        int count = 0;

        if (n == 1)
        {
            count = 1;
        }

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}