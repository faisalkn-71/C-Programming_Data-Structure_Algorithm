#include <stdio.h>
int sevenPresent(int n);
int digitSum(int n);
int lastDigitPrime(int n);

int main()
{
    int n;
    scanf("%d", &n);

    if (sevenPresent(n) == 1 && digitSum(n) > 10 && lastDigitPrime(n) == 1)
    {
        printf("Farhan's Number\n");
    }
    else
    {
        printf("No\n");
    }
}

int sevenPresent(int n)
{
    while (n > 0)
    {
        int seven = n % 10;

        if (seven == 7)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int lastDigitPrime(int n)
{
    int lastDigit = n % 10;
    if (lastDigit == 2 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}