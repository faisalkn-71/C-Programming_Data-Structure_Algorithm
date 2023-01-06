// #include <stdio.h>
// int main()
// {
//     char word[1000];
//     fgets(word, sizeof(word), stdin);

//     for (int i = 0; i < 1; i++)
//     {
//         if (word[i] >= 'a' && word[i] <= 'z')
//         {
//             word[i] -= 32;
//         }
//     }

//     puts(word);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char str[] = "Programming";
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c ", str[i]);
        i += 1;
    }
    printf(".");
    return 0;
}