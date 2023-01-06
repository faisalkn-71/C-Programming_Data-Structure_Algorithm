#include <stdio.h>
int main()
{
    int a = 1;
    int *p = &a;
    *p = 3;
    printf("%p\n", p);
    printf("%d\n", a);

    int **q = &p;

    **q = 7;
    printf("%p\n", q);
    printf("%d\n", a);
    printf("%p\n", &q);

    return 0;
}