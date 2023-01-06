#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *prtX = &x;
    int *prtY = &y;

    printf("%d %d", *prtX, *prtY);
    return 0;
}
