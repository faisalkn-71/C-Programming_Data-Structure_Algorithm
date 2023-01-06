#include <stdio.h>
int main()
{
    // int a = 12345;
    // int *p = &a;

    // printf("%p\n", p);
    // printf("%d\n", &a);
    // printf("%d\n", *&a);
    // printf("%d\n", *p);

    // char ch = 'F';
    // char *p = &ch;
    // printf("%p\n", p);
    // printf("%c\n", *p);

    int ara[3] = {1, 2, 3};

    printf("%p\n", &ara);
    printf("%d\n", *(ara + 1));

    return 0;
}