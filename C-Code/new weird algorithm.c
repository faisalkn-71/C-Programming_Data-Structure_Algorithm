#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n > 1)
    {
        printf("%d, ", n);

        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n--;
        }
    }
    printf("1");

    return 0;
}