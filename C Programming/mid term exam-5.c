// #include <stdio.h>
// int main()
// {
//     char a[10];
//     char ch = 'a';
//     for (int i = 0; i < 8; i++)
//     {
//         a[i] = ch + 8 - i;
//     }
//     a[8] = '\0';

//     puts(a);
// }

#include <stdio.h>
int main()
{
    int array[2][3] = {{10, 20, 30}, {40, 50, 60}}, i = 1, j = 0;
    array[i][j] = array[j][i];
    printf("%d,%d", array[i][j], array[j + 1][i + 1]);

    return 0;
}
