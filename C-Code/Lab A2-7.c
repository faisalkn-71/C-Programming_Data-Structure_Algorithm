#include <stdio.h>

void swap(int n, int ara[], int *l, int *r)
{
    int temp = ara[*l];
    ara[*l] = ara[*r];
    ara[*r] = temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n], i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int q, l, r;
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d %d", &l, &r);

        swap(n, ara, &l, &r);
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
