#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
}

int minDistance(char *word1, char *word2)
{
    int m = strlen(word1);
    int n = strlen(word2);
    int dist[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                dist[i][j] = j;
            else if (j == 0)
                dist[i][j] = i;
            else if (word1[i - 1] == word2[j - 1])
                dist[i][j] = dist[i - 1][j - 1];
            else
                dist[i][j] = 1 + min(dist[i - 1][j - 1],
                                     min(dist[i - 1][j], dist[i][j - 1]));
        }
    }
    return dist[m][n];
}

int main()
{
    char word1[] = "horse", word2[] = "ros";

    printf("%d", minDistance(word1, word2));
    return 0;
}