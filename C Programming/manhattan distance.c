#include <stdio.h>
struct Point
{
    int x;
    int y;
};

int manhattan(struct Point p1, struct Point p2)
{
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int main()
{
    struct Point p1;
    struct Point p2;

    scanf("(%d,%d)\n", &p1.x, &p1.y);
    scanf("(%d,%d)", &p2.x, &p2.y);

    printf("Manhattan distance is %d\n", manhattan(p1, p2));
    return 0;
}