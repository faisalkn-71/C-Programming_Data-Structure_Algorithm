#include <stdio.h>

int factorial(int i, int n)
{
    if (i > n)
        return 1;
    int f = factorial(i + 1, n);
    return f * i;
}
int main()
{
    int n;
    scanf("%d", &n);
    int fact = factorial(1, n);
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}