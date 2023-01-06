#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("The absolute value of a is %u\n", abs(a));
    printf("The absolute value of b is %u\n", abs(b));

    return 0;
}