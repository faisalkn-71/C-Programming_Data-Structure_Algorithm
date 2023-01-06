/* Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours
format). You need to print from N to M, if you need to start from beginning again, you can do that. See the
sample input output for more clarification.
5 12    -->   5 6 7 8 9 10 11 12
21 3    -->   21 22 23 0 1 2 3

*/

#include <stdio.h>
int main()
{
    int i, m, n;
    scanf("%d %d", &n, &m);

    if (n < m)
    {
        for (i = n; i <= m; i++)
        {
            printf("%d ", i);
        }
    }

    else
    {
        for (i = n; i <= 24 + m; i++)
        {

            if (i > 23)
            {
                printf("%d ", i % 24);
            }
            else
            {
                printf("%d ", i);
            }
        }
    }

    // else niser ta oo korle hobe

    // else
    // {
    //     for (i = n; i < 24; i++)
    //     {
    //         printf("%d ", i);
    //     }

    //     for (i = 0; i <= m; i++)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    return 0;
}