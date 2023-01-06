#include<stdio.h>
int main()
{
    char a, b, c, d;
    printf("Please, enter the any alphabet: ");
    scanf("%c %c %c %c", &a, &b, &c, &d);

    printf("%c, %c, %c and %c is %d, %d, %d and %d", a, b, c, d, a, b, c, d);

    printf("%c = %d\n", a, a);
    printf("%c = %d\n", b, b);
    printf("%c = %d\n", c, c);
    printf("%c = %d\n", d, d);

    return 0;
}
