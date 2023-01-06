#include <stdio.h>
int main()
{
    long long int number;
    // printf("Please, enter a number: ");
    scanf("%lld", &number);

    while (number > 1)
    {
        printf("%lld ", number);
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = (3 * number) + 1;
        }
    }

    printf("%lld\n", number);

    return 0;
}