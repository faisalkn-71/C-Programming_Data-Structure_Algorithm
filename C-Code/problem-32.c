/* Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible
by M. */

#include <stdio.h>
int main()
{
    int i, m, n;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }

    return 0;
}