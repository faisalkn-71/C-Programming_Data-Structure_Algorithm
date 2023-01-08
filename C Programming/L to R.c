#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r, count;
        scanf("%d %d", &l, &r);

        for (int i = l; i <= r; i++)
        {
            count = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count += 1;
                    break;
                }
            }
            if (count == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}