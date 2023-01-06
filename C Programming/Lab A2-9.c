#include <stdio.h>

int is_prime(int n, int ara[])
{
    int i, count = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            count++;
        }
    }
    return count;
}

float average_even(int n, int ara[])
{
    int i, sum = 0, count2 = 0;
    for (i = 0; i < n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            sum += ara[i];
            count2++;
        }
    }

    float avg = (float)sum / (float)count2;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int ans1 = is_prime(n, ara);
    float ans2 = average_even(n, ara);

    printf("Prime numbers: %d\n", ans1);
    printf("Average of all even integers: %0.2f\n", ans2);

    return 0;
}
