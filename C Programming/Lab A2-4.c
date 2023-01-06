#include <stdio.h>

int four_consecutive_nums(int num)
{
    int ans = (num - 12) / 4;
    printf("%d ", ans);
    printf("%d ", ans + 2);
    printf("%d ", ans + 4);
    printf("%d ", ans + 6);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        four_consecutive_nums(n);
    }

    return 0;
}
