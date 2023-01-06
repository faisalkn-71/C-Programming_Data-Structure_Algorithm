#include <stdio.h>
int main()
{
    int t, k;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        int ara[6];
        int flag = 0, i;
        for (i = 0; i < 6; i++)
        {
            scanf("%d", &ara[i]);
        }

        for (i = 0; i < 6; i++)
        {
            if (ara[i] != 0)
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}