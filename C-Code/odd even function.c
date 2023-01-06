#include <stdio.h>

int numcheck(int x)
{
    if (x % 2 == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    scanf("%d", &num);

    int ans = numcheck(num);
    if (ans == 1)
    {
        printf("This is an odd number.\n");
    }
    else
    {
        printf("This is an even number.\n");
    }

    return 0;
}