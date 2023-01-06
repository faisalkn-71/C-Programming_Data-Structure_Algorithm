#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}