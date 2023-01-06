#include <stdio.h>
#include <string.h>

int desireNum(char num[100])
{
    int one = 0, seven = 0, nine = 0;
    for (int i = 0; num[i] != '\0'; i++)
    {
        if (num[i] == '1')
        {
            one = 1;
        }

        if (num[i] == '7')
        {
            seven = 1;
        }

        if (num[i] == '9')
        {
            nine = 1;
        }
    }

    if (one == 1 && seven == 1 && nine == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char num[100];
    gets(num);

    int output = desireNum(num);

    if (output == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}