#include <stdio.h>
int main()
{
    int i, n;
    printf("Please, enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nNumber is: %d and Square of the %d is: %d\n", i, i, i * i);
    }
    return 0;
}