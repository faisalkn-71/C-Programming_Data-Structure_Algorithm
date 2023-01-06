#include<stdio.h>

int main()

{
    //how to take input
    int a, b;
    float c;
    double d;
    char first_letter;
    printf("Please three number: ");
    scanf("%d %d %f %lf %c",&a,&b,&c,&d,&first_letter);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n", b);
    printf("The floating number c is %f\n", c);
    printf("The double type number d is %lf\n", d);
    printf("The first letter of my name is %c", first_letter);

    return 0;
}
