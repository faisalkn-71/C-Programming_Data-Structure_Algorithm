#include <stdio.h>
int main()
{
    int x, t, k, ans;
    char a;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {

        scanf("%d%c", &x, &a);

        if (x < 60)
        {
            ans = (((60 - x) * 1) + 40 + 60);
        }
        else if (x < 80 && x >= 60)
        {
            ans = (((80 - x) * 2) + 60);
        }
        else
        {
            ans = ((100 - x) * 3);
        }

        printf("%d minutes\n", ans);
    }

    return 0;
}