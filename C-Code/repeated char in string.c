#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "dddaaabccdffgzzza";

    int i, j;
    char prev;
    for (i = 0; i < strlen(name); i++)
    {
        if (i == 0)
        {
            prev = name[i];
            printf("%c", name[i]);
            continue;
        }
        if (name[i] == prev)
        {
            continue;
        }
        printf("%c", name[i]);
        prev = name[i];
    }
}