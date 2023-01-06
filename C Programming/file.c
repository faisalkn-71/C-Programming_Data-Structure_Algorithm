#include <stdio.h>
// from here main function start
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("Summation -> %d\n", sum);
    return 0;
}