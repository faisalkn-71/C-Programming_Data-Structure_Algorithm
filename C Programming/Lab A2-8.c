#include <stdio.h>
#include <string.h>

char new_str(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        if (i % 2 == 1)
        {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    char str[100];
    gets(str);

    new_str(str);

    return 0;
}
