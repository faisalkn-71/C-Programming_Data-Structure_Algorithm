#include <stdio.h>
int main()
{
    // input: X%, Y%,   output: (X*Y)%

    int x, y;
    char a, b;
    char c = '%';
    printf("Please, enter two numbers with percentage sign: ");
    scanf("%d%c %d%c", &x, &a, &y, &b);
    printf("%d%c", x * y, c);
    return 0;
}
