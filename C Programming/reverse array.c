#include <stdio.h>
int main()
{
    int N, i;
    printf("Please, enter a number: ");
    scanf("%d", &N);

    int ara[N];

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = N; i >= 1; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}