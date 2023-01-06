#include <stdio.h>

void swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;

    printf("m = %d and n = %d\n", *m, *n);
}

int main()
{
    int x = 7, y = 17;
    swap(&x, &y);
    printf("x = %d and y = %d\n", x, y);
    return 0;
}
// #include <stdio.h>

// void swap(int m, int n)
// {
//     int temp;
//     temp = m;
//     m = n;
//     n = temp;

//     printf("m = %d and n = %d\n", m, n);
// }

// int main()
// {
//     int x = 7, y = 17;
//     swap(x, y);
//     printf("x = %d and y = %d\n", x, y);
//     return 0;
// }