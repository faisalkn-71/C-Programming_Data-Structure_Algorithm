#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        while (n > 0)
        {
            int digit = n % 10;
            if (digit == 1)
                printf("A");
            if (digit == 2)
                printf("B");
            if (digit == 3)
                printf("C");
            if (digit == 4)
                printf("D");
            if (digit == 5)
                printf("E");
            if (digit == 6)
                printf("F");
            if (digit == 7)
                printf("G");
            if (digit == 8)
                printf("H");
            if (digit == 9)
                printf("I");
            n = n / 10;
        }
        printf("\n");
    }
    return 0;
}