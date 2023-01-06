// #include <stdio.h>
// int main()
// {
//     // float num = 3.1416;
//     // float *p = &num;

//     // *p = 7.7777;

//     // printf("%0.4f\n", num);

//     char ch = 'a';
//     char *p = &ch;
//     *p = 'z';

//     printf("%c\n", ch);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int x = 10, *ptr;
    ptr = &x;
    *ptr += 2;
    printf("%d, %d", *ptr, x);
    return 0;
}