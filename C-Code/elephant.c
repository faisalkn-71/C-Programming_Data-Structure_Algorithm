#include <stdio.h>
int main()
{
    int x, steps;
    scanf("%d", &x);

    steps = ceil((float)x / 5);
    printf("%d", steps);
    return 0;
}