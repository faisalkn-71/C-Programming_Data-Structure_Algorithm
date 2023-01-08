#include <stdio.h>

int gcd(int num1, int num2)
{
    if (num1 == 1 && num2 == 1)
    {
        return 0;
    }
    else if (num1 == 0)
    {
        return num2;
    }

    else if (num2 == 0)
    {

        return num1;
    }

    else
    {
        while (num2 != 0)
        {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }

        return num1;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, j, count = 0, ans;
        scanf("%d", &n);
        int ara[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = n - 1; j >= 0; j--)
            {

                ans = gcd(ara[i], ara[j]);
                if (ans == 1)
                {
                    count = count + ans;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}