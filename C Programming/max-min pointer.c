#include <stdio.h>

void func(int x, int y, int *p, int *q)
{
    *p = x > y ? x : y;
    *q = x > y ? y : x;
}

int main()
{
    int a = 25, b = 12;
    int large, small;

    func(a, b, &large, &small);

    printf("%d and %d \n", large, small);
    return 0;
}