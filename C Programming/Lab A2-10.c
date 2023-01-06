#include <stdio.h>

int count_seven(int n, int ara[])
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (ara[i] == 7)
        {
            count++;
        }
        while (ara[i] > 0)
        {
            if (ara[i] % 10 == 7)
            {
                count++;
            }
            ara[i] /= 10;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int ans = count_seven(n, ara);

    float half_ara = ceil((float)n / 2);

    if (ans >= half_ara)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }

    return 0;
}
