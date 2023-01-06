#include <stdio.h>
int main()
{
    int n = 7, i, j;
    int ara[7] = {12, 7, 10, 3, 15, 2, 4};
    int sorted_ara[n];

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    int min, m_index;

    for (j = 0; j < n; j++)
    {
        min = ara[0];
        m_index = 0;

        for (i = 0; i < n; i++)
        {
            if (min > ara[i])
            {
                min = ara[i];
                m_index = i;
            }
        }

        sorted_ara[j] = min;
        ara[m_index] = 99999;

        for (i = 0; i < n; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", sorted_ara[i]);
    }
    printf("\n");

    return 0;
}