#include <stdio.h>
int main()
{
    int i, vowel = 0, consonant = 0;
    char word[1000];
    fgets(word, sizeof(word), stdin);

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] <= 'Z')
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'O' || word[i] == 'I' || word[i] == 'U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    printf("Number of vowel is %d\n", vowel);
    printf("Number of consonant is %d\n", consonant);

    return 0;
}