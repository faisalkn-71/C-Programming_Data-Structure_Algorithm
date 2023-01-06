#include <stdio.h>
int is_leap(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_distinct(int y)
{
    int count_digit[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int last_digit;

    while (y > 0)
    {
        last_digit = y % 10;
        count_digit[last_digit]++;
        y /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count_digit[i] > 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int year;
    scanf("%d", &year);

    if (is_leap(year) && is_distinct(year))
    {
        printf("Beautiful Number.\n");
    }
    else
    {
        printf("No comment!\n");
    }

    return 0;
}