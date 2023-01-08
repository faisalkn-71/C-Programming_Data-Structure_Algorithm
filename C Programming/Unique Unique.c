#include <stdio.h>

int main()
{
    int n, largestElement = 26, count = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    int freq[largestElement + 1];

    for (int i = 0; i <= largestElement; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[(str[i] - 'a') + 1]++;
    }

    for (int i = 0; i <= largestElement; i++)
    {
        if (freq[i] == 1)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}