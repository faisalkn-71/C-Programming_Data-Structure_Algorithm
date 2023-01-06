#include <stdio.h>
int main()
{
    int i;
    int ara[] = {900, 500, 700, 150, 600, 400};

    int max = ara[0];
    int secondMax;

    for (i = 0; i <= 5; i++)
    {
        if (ara[i] > max)
        {
            secondMax = max;
            max = ara[i];
        }

        else if (ara[i] > secondMax && ara[i] < max)
        {
            secondMax = ara[i];
        }
    }

    printf("Second maximum element is %d and %d\n", secondMax, max);

    return 0;
}