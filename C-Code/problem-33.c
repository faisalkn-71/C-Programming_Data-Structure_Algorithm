// Write a C program to take one positive integer N as input and print all divisors of N.

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    int m = sqrt(n);

    for (i = 1; i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }

        printf("%d ", n / i);
    }

    return 0;
}