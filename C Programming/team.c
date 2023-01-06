#include <stdio.h>
int main()
{
    int n, i, j, a, solved = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a);
            count += a;
        }

                if (count >= 2)
        {
            solved++;
        }
    }

    printf("%d\n", solved);

    return 0;
}