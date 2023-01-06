#include <stdio.h>
int main()
{
    int n, k, i, room = 101, floor = 2, sum = 0;

    scanf("%d %d", &n, &k);

    for (i = 1; i <= (n * k); i += 1)
    {
        sum += room;
        room += 1;
        if (i % k == 0)
        {
            room = (100 * floor) + 1;
            floor += 1;
        }
    }

    printf("%d\n", sum);
    return 0;
}