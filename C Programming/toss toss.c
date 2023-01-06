#include <stdio.h>
int main()
{
    int t, k;
    scanf("%d", &t);

    for (k = 0; k < t; k++)
    {
        int N, i, tall = 0, head = 0;
        scanf("%d", &N);

        char ara[N];

        scanf("%s", ara);

        for (i = 0; i < N; i++)
        {
            if (ara[i] == 'T')
            {
                tall++;
            }
            else if (ara[i] == 'H')
            {
                head++;
            }
        }

        if (tall > head)
        {
            printf("Pakistan\n");
        }
        else
        {
            printf("England\n");
        }
    }
    return 0;
}