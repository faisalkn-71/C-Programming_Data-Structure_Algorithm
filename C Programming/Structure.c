#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    struct Student stu = {100, "Faisal Karim", 22, 78.43};
    struct Student stu2 = {101, "Saimon Chowdury", 23, 80.234};
    struct Student stu3 = {.age = 25, .roll = 102, .weight = 6.443, .name = "Naimul Haque Nahin"};
    struct Student stu4;
    scanf("%d %s %d %f", &stu4.roll, &stu4.name, &stu4.age, &stu4.weight);

    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f", stu.roll, stu.name, stu.age, stu.weight);

    printf("\n");
    printf("\n");

    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", stu2.roll, stu2.name, stu2.age, stu2.weight);
    printf("\n");
    printf("\n");

    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", stu3.roll, stu3.name, stu3.age, stu3.weight);
    printf("\n");
    printf("\n");

    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", stu4.roll, stu4.name, stu4.age, stu4.weight);

    return 0;
}