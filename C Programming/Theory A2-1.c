#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];

    gets(word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= 32;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] += 32;
        }
    }

    puts(word);

    return 0;
}