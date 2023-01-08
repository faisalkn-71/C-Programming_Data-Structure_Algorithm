#include <stdio.h>

int main()
{
    int n, s;
    scanf("%d %d", &n, &s);

    int ans = (s - n) / 2;

    printf("%d", ans);
    return 0;
}