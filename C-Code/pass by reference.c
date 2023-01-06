#include <stdio.h>

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping x = %d, y = %d\n", *x, *y);
}
int main()
{
    int a = 5, b = 7;
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}