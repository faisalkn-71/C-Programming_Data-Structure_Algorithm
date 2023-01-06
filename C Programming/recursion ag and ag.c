// #include <stdio.h>

// int fact(int n)
// {
//     int mul = 1;
//     if (n > 0)
//     {
//         printf("%d ", n);
//         return n * fact(n - 1);
//     }
//     else
//     {
//         return 1;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ans = fact(n);
//     printf("\nFactorial is %d", ans);
//     return 0;
// }

#include <stdio.h>
int foo(int n)
{
    if (n == 0)
        return 0;
    return foo(n - 1) + n;
}
int main()
{
    printf("%d\n", foo(6));
    return 0;
}
