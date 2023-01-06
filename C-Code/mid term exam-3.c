#include <stdio.h>
int main()
{
    int n = 15, i;
    int ara[n];

    ara[0] = 1;

    for (i = 1; i < n; i++)
    {
        ara[i] = ara[i - 1] * 2;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    return 0;
}