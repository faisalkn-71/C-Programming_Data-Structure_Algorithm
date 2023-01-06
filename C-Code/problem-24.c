#include <stdio.h>
int main()
{
    int sum, i;
    printf("The first 10 natural numbers is : ");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nThe Sum is %d.", sum);
    return 0;
}