#include <stdio.h>
int main()
{
    int N, i;

    scanf("%d", &N);

    int ara[N];
    ara[1] = 0;
    ara[2] = 1;

    for (i = 1; i < 3; i++)
    {
        printf("%d ", ara[i]);
        if (N == 1)
        {
            break;
        }
    }

    for (i = 3; i <= N; i++)
    {
        ara[i] = ara[i - 1] + ara[i - 2];

        printf("%d ", ara[i]);
    }

    return 0;
}