#include <stdio.h>
int main()
{
    int i, N, ara[100], count = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (ara[i] / ara[0] == 1)
        {
            count++;
        }
    }

    if (count == N)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}