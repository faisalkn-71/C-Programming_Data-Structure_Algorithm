#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int choc = n, pack = n;

    while (pack >= 4)
    {
        choc += (pack / 4);
        pack = (pack / 4) + (pack % 4);
    }

    printf("Total number of chocolate: %d\n", choc);
    return 0;
}