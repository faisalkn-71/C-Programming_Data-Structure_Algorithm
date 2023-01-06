#include <stdio.h>
int main()
{
    // int a, b;
    // printf("%p\n", &a);
    // printf("%p\n", &b);

    // long long int a, b;
    // printf("%p\n", &a);
    // printf("%p\n", &b);

    // float a, b;
    // printf("%p\n", &a);
    // printf("%p\n", &b);

    // double a, b;
    // printf("%p\n", &a);
    // printf("%p\n", &b);

    char ch, ch1;
    printf("%p\n", &ch);
    printf("%p\n", &ch1);
    printf("\n");
    printf("\n");

    long long int ara[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i;
    printf("%p\n", ara);
    printf("\n");
    printf("\n");

    for (i = 0; i < 9; i++)
    {
        printf("%p\n", &ara[i]);
    }

    return 0;
}