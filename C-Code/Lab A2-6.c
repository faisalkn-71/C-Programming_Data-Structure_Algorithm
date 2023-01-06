#include <stdio.h>

int is_div_three(int x, int ara_three[])
{
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (ara_three[i] % 3 == 0)
        {
            count++;
        }
    }

    if (count > 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int is_div_five(int y, int ara_five[])
{
    int count2 = 0;
    for (int i = 0; i < y; i++)
    {
        if (ara_five[i] % 5 == 0)
        {
            count2++;
        }
        if (ara_five[i] % 3 == 0 && ara_five[i] % 5 == 0)
        {
            count2--;
        }
    }

    if (count2 > 0)
    {
        return count2;
    }
    else
    {
        return -1;
    }
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
    int ans_three = is_div_three(n, ara);
    int ans_five = is_div_five(n, ara);
    if (ans_five > 0 && ans_three > 0)
    {
        printf("%d", ans_five + ans_three);
    }
    else if (ans_five > 0 && ans_three < 0)
    {
        printf("%d", ans_five);
    }
    else if (ans_five < 0 && ans_three > 0)
    {
        printf("%d", ans_three);
    }
    else
    {
        printf("-1");
    }
}
