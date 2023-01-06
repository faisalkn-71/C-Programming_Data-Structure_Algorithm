#include <stdio.h>

int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", factorial(num));
    return 0;
}

// #include <stdio.h>
// void fun(int n)
// {
//     if (n > 0)
//     {
//         fun(n - 1);
//         printf("%d ", n);
//     }
// }
// int main()
// {
//     int x = 4;
//     fun(x);
//     return 0;
// }

// #include <stdio.h>
// int value = 2;
// void foo(int n)
// {
//     value *= 2;
// }
// int main()
// {
//     printf("%d \n", value);
//     return 0;
// }

// #include <stdio.h>
// int value = 3;
// void foo(int n)
// {
//     value *= 2;
// }
// int main()
// {
//     printf("%d \n", value);
//     foo(2);
//     return 0;
// }