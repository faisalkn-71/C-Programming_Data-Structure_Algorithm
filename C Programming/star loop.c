#include <stdio.h>
int main()
{

    for (int i = 100; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}