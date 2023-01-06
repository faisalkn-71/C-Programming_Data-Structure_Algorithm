#include<stdio.h>

int main()
{
    // processing operators

    int a, b;

    printf("Please Enter tow numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int sub = a - b;
    int multiple = a * b;
    int division = a / b;

    printf("The sum of two number is %d\n", sum);
    printf("The sub of two number is %d\n", sub);
    printf("The multiple of two numbers is %d\n", multiple);
    printf("The division of two numbers is %d\n", division);

    return 0;
}
