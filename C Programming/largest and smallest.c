#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int largest = a, smallest = a;

    if (largest < b)
    {
        largest = b;
    }
    else if (smallest > b)
    {
        smallest = b;
    }

    if (largest < c)
    {
        largest = c;
    }
    else if (smallest > c)
    {
        smallest = c;
    }

    if (largest < d)
    {
        largest = d;
    }
    else if (smallest > d)
    {
        smallest = d;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}