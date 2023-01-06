#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char word[20], wordCpy[20];
    while (n--)
    {
        scanf("%s", word);

        int len = strlen(word);

        // printf("Length of the given word is %d\n", len);

        if ((strcmp(strrev(word), strcpy(wordCpy, word))) == 0)
        {
            if (len > 7)
            {
                printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
            }

            else
            {
                puts(word);
                        }
        }
        else
        {
            printf("Not Palindrome\n");
        }
    }
    return 0;
}