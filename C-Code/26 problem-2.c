#include <stdio.h>

void func_max_min(int n, int ara[], int *p, int *q)
{
    *p = ara[0];
    *q = ara[0];
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > *p)
        {
            *p = ara[i];
        }
        if (ara[i] < *q)
        {
            *q = ara[i];
        }
    }
}

int main()
{
    int n = 7;
    int ara[] = {12, 13, 9, 50, 7, 38, 1};

    int max, min;

    func_max_min(n, ara, &max, &min);

    printf("Max = %d and Min= %d", max, min);

    return 0;
}