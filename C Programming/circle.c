#include<stdio.h>

int main()
{
    //calculating the area of a circle

    int radius;
    printf("Please, enter the radius of a circle: ");
    scanf("%d", &radius);

    float pi = 3.14159;
    float area = pi * radius * radius;
    printf("The are of this circle is %f", area);
    return 0;
}
