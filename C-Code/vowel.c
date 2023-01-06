#include <stdio.h>
int main()
{
    char sen[10000];
    // scanf("%s", sen);
    // gets(sen);
    fgets(sen, sizeof(sen), stdin);

    int i, counter = 0;

    i = 0;

    while (sen[i] != '\0')
    {
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            counter++;
        }

        i++;
    }

    printf("%s", sen);
    printf("\nNumber of vowels = %d\n", counter);
    return 0;
}