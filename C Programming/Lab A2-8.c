// #include <stdio.h>
// #include <string.h>

// char new_str(char str[])
// {
//     for (int i = 0; i < strlen(str); i++)
//     {
//         printf("%c", str[i]);
//         if (i % 2 == 1)
//         {
//             printf("%c", str[i]);
//         }
//     }
// }

// int main()
// {
//     char str[100];
//     gets(str);

//     new_str(str);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int count, flag = 0, a = 0;
    printf("Enter the string : \n");
    scanf("%[^\n]*c", string);

    printf("Duplicate characters in a given string: \n");

    // Counts each character present in the string
    for (int i = 0; i < strlen(string); i++)
    {
        count = 1; // Updates the count again to 1 for every new character

        for (int j = i + 1; j < strlen(string); j++)
        {
            if (string[i] == string[j] && string[i] != ' ')
            {
                count++;
                // Set string[j] to 0 to avoid printing visited character
                string[j] = '0';
            }
            if (string[i] == string[j])
            {
                flag++;
                // break;
            }
        }

        // A character is considered as duplicate if count is greater than 1
        printf("C%d", count);
        if (count > 1 && string[i] != '0')
            // printf("%c\n", string[i]);
            a++;
    }
    printf("%d and %d", flag, a);

    return 0;
}