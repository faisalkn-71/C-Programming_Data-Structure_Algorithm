#include <stdio.h>
int main()
{
    int i, j, ara[100], N;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d - ", i);

        for (j = 1; j <= N; j++)
        {
            if (i == j)
            {
                //
            }
            else
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}