#include <stdio.h>
int unknown(int n)
{
    int i;
    if (n >= 0)
    {
        for (i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        int a;
        a = (-1) * n;
        for (i = n; i <= a; i++)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    unknown(n);

    return 0;
}