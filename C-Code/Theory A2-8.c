#include <stdio.h>
int main()
{
    char word[100];
    gets(word);
    int num, i;
    scanf("%d", &num);

    for (i = 0; word[i] != '\0'; i++)
    {
        word[i] = (((word[i] - 'a') + num) % 26) + 'a';
    }

    puts(word);
    return 0;
}