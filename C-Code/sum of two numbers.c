#include <stdio.h>
int main()
{
    int N, i, j, count = 0, ara[100], target;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j)
            {
                //
            }
            else if (ara[i] + ara[j] == target)
            {
                count++;
                break;
            }
        }
    }

    if (count > 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}