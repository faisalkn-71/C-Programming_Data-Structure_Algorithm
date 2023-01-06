#include <stdio.h>
int main()
{
    int N, i, ara[100], q, v, I;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }

    scanf("%d", &q);

    for (i = 0; i < q; i++)
    {
        scanf("%d%d", &I, &v);

        ara[I] = ara[I] + v;
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}