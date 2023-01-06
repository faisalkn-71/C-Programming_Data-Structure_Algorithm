#include <stdio.h>

int larCheck(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int largest = larCheck(a, b, c);
    printf("The largest number of among three is %d\n", largest);
    return 0;
}