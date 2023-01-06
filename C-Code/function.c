// // // #include <stdio.h>

// // // int myfriend()
// // // {
// // //     printf("A quick brown fox jumps over the lazy dog.\n");
// // //     return 100;
// // // }

// // // int mySum(int x, int y)
// // // {
// // //     printf("Summation of two numbers.....\n");
// // //     return x + y;
// // // }

// // // int doubleInt(int z)
// // // {
// // //     printf("The double of given integer is.......\n");
// // //     return 2 * z;
// // // }

// // // int main()
// // // {
// // //     int a;
// // //     a = myfriend();
// // //     printf("value of a is %d\n", a);

// // //     int b;
// // //     b = mySum(7, 100);
// // //     printf("%d\n", b);

// // //     int c = doubleInt(2);
// // //     printf("%d\n", c);

// // //     myfriend();
// // //     myfriend();
// // //     mySum(8, 2);
// // //     return 0;
// // // }

// // #include <stdio.h>

// // void getSum()
// // {
// //     int a = 10, b = 5;
// //     printf("%d", a + b);
// // }
// // int main()
// // {
// //     printf("ok");
// //     return 0;
// // }

// #include <stdio.h>

// int getMultiplication()
// {
//     int a = 10, b = 5;
//     return (a * 3);
// }
// int main()
// {
//     int ans = getMultiplication();
//     printf("%d", ans);
//     return 0;
// }

#include <stdio.h>

int getMultiplication(int value1, int value2)
{
    int a = value1, b = value2;
    return (value1 * value2);
}
int main()
{
    printf("2");
    int ans = getMultiplication(11, 2);
    printf("%d\n", ans);
    return 0;
}