#include<stdio.h>
int main()
{

    // calculating the area of a triangle when base and height is given

    int base, height;
    printf("Please, enter the base and height of the triangle: ");
    scanf("%d %d", &base, &height);

    // calculating the area of a triangle when three side are given

    int a, b, c;
    printf("Please, enter the three side of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);


    float areaOfTriangle = 0.5 * base * height;

    float s = (a+b+c)/0.5;

    float area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of this triangle is %f\n", areaOfTriangle);
    printf("The area of triangle is %f\n",area);
    return  0;
}
