// Write a C program to take one positive integer N as input and print from 1 to N.

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }

    i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}