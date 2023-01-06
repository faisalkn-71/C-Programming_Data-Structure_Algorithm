#include <stdio.h>
struct Student
{
    double weight;
    int roll;
    int age;
    char name[50];
};

int main()
{
    int n, i;
    scanf("%d", &n);

    struct Student stu[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d %lf", &stu[i].roll, &stu[i].name, &stu[i].age, &stu[i].weight);
    }
    for (i = 0; i < n; i++)
    {
        printf("Roll = %d Name = %s Age = %d Weight = %lf\n", stu[i].roll, stu[i].name, stu[i].age, stu[i].weight);
    }

    return 0;
}