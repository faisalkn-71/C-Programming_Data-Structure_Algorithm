#include <stdio.h>
int main()
{
    int i;
    int ara[] = {10, 20, 70, 15, 25};

    int min = ara[0];

    for (i = 1; i <= 4; i++)
    {
        if (min > ara[i])
        {
            min = ara[i];
        }
    }

    printf("Minimum element of this array is %d\n", min);
    return 0;
}