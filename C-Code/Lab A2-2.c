#include <stdio.h>
#include <string.h>
char descending_order(char str[])
{
    char temp;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
}

int main()
{
    char str[100];
    gets(str);
    descending_order(str);
    return 0;
}
