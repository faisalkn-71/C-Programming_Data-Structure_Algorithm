#include <stdio.h>
int main()
{
    char str[20];
    gets(str);

    int i, a, b, sum = 0;
    scanf("%d%d", &a, &b);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '+')
        {
            sum += (a + b);
        }

        else if (str[i] == '*')
        {
            sum += (a * b);
        }
    }

    printf("%d \n", sum);

    return 0;
}