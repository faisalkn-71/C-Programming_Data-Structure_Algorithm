// #include <stdio.h>

// int main()
// {
//     int a = 12;
//     double b = 5.62;
//     int *pi;
//     double *pd;

//     pi = &a;
//     pd = (double *)pi;

//     printf("%d and %lf\n", a, b);
//     printf("%p and %p\n", pi, pd);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    ptr = (int *)malloc(1 * sizeof(int));
    printf("%d", *ptr);
    return 0;
}