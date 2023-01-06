// Write a C program to take one integer N as input and print from 1 to N.

#include <stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);

    if (n > 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (i = 1; i >= n; i--)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}