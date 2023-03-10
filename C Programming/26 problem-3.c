#include <stdio.h>

int sum_of_nums(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

int is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (is_prime(sum_of_nums(n)) == 1)
    {
        printf("Faisal's Number\n");
    }
    else
    {
        printf("No!\n");
    }

    return 0;
}