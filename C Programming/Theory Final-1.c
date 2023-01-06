#include <stdio.h>
int main()
{
    int a = 99, b = 17;
    int max = a > b ? a : b;
    printf("The maximum between them is %d\n", max);
    return 0;
}