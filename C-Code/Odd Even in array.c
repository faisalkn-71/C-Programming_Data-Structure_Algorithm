#include <stdio.h>
int main()
{
    int i, n;

    scanf("%d", &n);

    int ara[n];
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int odd = 0, even = 0;

    for (i = 0; i <= n; i++)
    {
        printf("%dth element is %d\n", i, ara[i]);
        if (ara[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of Odd element is %d\n", odd);
    printf("Number of Even element is %d\n", even);

    return 0;
}