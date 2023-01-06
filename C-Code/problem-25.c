#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Please, enter a natural number: ");
    scanf("%d", &n);

    printf("\n The first %d natural number is: ", n);

    while (i <= n)
    {
        printf("%d ", i);
        sum = sum + i;
        i++;
    }
    printf("\n The sum of natural number upto %d term: %d", n, sum);
    return 0;
}