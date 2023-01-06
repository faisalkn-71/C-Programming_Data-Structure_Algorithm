// #include <stdio.h>
// #include <math.h>

// struct Point
// {
//     int x;
//     int y;
// };

// double distance(struct Point p, struct Point q)
// {
//     return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
// }

// int main()
// {
//     struct Point p1, p2;

//     scanf("%d %d", &p1.x, &p1.y);
//     scanf("%d %d", &p2.x, &p2.y);

//     printf("The distance between them = %lf", distance(p1, p2));
//     return 0;
// }

#include <stdio.h>
struct st
{
    char x;
    int ar[6];
    int a;
    char y;
    double b;
};

int main()
{
    printf("%d", sizeof(struct st));
    return 0;
}