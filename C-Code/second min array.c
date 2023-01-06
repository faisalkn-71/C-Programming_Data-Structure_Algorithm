#include <stdio.h>
int main()
{
    int n, i, min, secondMin;
    scanf("%d", &n);

    int ara[n];

    for (i = 0; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    min = ara[0];
    secondMin = ara[1];

    for (i = 1; i <= n; i++)
    {
        if (ara[i] < min)
        {
            secondMin = min;
            min = ara[i];
        }

        else if (min < ara[i] && ara[i] < secondMin)
        {
            secondMin = ara[i];
        }
    }

    printf("Second minimum element of this array is %d and %d\n", secondMin, min);

    return 0;
}