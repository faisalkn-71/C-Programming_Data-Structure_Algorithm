#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N;
        scanf("%d", &N);

        int i, count = 0;

        char binary[N];

        scanf("%s", binary);

        for (i = 0; i < strlen(binary); i++)
        {
            if (binary[i - 1] == '0' && binary[i] == '1')
            {
                count++;
            }
            else if (binary[i - 1] == '1' && binary[i] == '0')
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}