// #include <stdio.h>

// int fact(int x);
// int main()
// {
//     int n, r;
//     scanf("%d %d", &n, &r);

//     int perm = fact(n) / fact(n - r);
//     int comb = fact(n) / ((fact(n - r)) * fact(r));

//     printf("nPr = %d\n", perm);
//     printf("nCr = %d\n", comb);

//     return 0;
// }

// int fact(int x)
// {
//     int res = 1, i;

//     for (i = x; i >= 1; i--)
//     {
//         res *= i;
//     }

//     return res;
// }

#include <stdio.h>
int addition();

int main()
{
    int result;
    result = addition();
    printf("%d", result * 2);
    return 0;
}

int addition()
{
    int num1 = 10, num2 = 5;
    return num1 + num2;
}