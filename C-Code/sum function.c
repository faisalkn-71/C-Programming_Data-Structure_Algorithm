#include <stdio.h>

int mySum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = mySum(a, b);
    printf("Summation of two numbers is %d\n", sum);
    return 0;
}