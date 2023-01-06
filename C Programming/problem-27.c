#include <stdio.h>
int main()
{
    int number, i, sum = 0, weight;

    printf("Please, enater a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        scanf("%d", &weight);
        sum += weight;
    }

    printf("Total weight is %d\n", sum);
    return 0;
}
