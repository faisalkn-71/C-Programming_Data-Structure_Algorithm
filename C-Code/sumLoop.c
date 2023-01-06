#include <stdio.h>
int main()
{
    int i = 1, sum = 0, number;
    printf("Please, enter a number: ");
    scanf("%d", &number);

    while (i <= number)
    {
        sum = sum + i;
        i++;
    }

    printf("Summation of 1 to %d is %d", number, sum);
    return 0;
}