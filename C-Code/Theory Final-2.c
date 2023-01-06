
#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, temp = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", temp);
        a = b;
        b = temp;
        temp = a + b;
    }

    return 0;
}