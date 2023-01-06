#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Please, enter tow integer: ");
    scanf("%d%d", &num1, &num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int multiple = num1 * num2;

    printf("Sum is %d.\t Sub is %d.\t Multiple is %d.", sum, sub, multiple);
    return 0;
}
