#include <stdio.h>
int main()
{
    int num1, num2, temp, gcd, lcm;

    scanf("%d %d", &num1, &num2);

    int x = num1, y = num2;

    if (num1 == 0)
    {
        gcd = num2;
    }

    else if (num2 == 0)
    {
        gcd = num1;
    }

    else
    {
        while (num1 != 0)
        {
            temp = num1;
            num1 = num2 % num1;
            num2 = temp;
        }
        gcd = num2;
    }

    lcm = (x * y) / gcd;

    printf("The LCM of %d and %d is %d.\n", x, y, lcm);

    return 0;
}