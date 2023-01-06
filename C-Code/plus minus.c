#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char sign[n];
    scanf("%s", sign);

    int i, j, count = 0, ans = 0;

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = i + 1; j < n; j++)
        {
            if (sign[i] != sign[j])
            {
                break;
            }
            count++;
        }
        if (ans <= count)
        {
            ans = count + 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}