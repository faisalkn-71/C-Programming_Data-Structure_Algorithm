#include <stdio.h>
int g = 7;

void addTwoNums()
{
    int g = 100;
    printf("Printing from the addTwoNums function: %d\n", g);
    g = g + 10;
    {
        extern int g;
        printf("Printing from the addTwoNums function: %d\n", g);
    }
}

int main()
{
    int a = 100;
    addTwoNums();
    printf("Printing from main function: %d\n", g);
    return 0;
}
