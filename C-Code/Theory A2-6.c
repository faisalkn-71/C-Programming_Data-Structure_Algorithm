#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int ratio_of_fact(int a, int b)
{
    if (a > b)
        return factorial(a) / factorial(b);

    else
        return factorial(b) / factorial(a);
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int ratio = ratio_of_fact(num1, num2);

    printf("The ratio of factorial of num1 and factorial of num2 is %d\n", ratio);

    return 0;
}