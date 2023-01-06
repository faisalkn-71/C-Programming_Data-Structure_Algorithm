#include <stdio.h>
int main()
{
    int sum = 0, number;

    printf("Please, enter a number: ");
    scanf("%d", &number);

    for (int i = 100; i > number; i--)
    {
        sum = sum + i;
    }
    printf("Summation is %d", sum);
    return 0;
}