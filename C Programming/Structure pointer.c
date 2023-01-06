#include <stdio.h>
struct Student
{
    double weight;
    int roll;
};

int main()
{
    struct Student stu = {.weight = 80.234, .roll = 101};
    struct Student stu2 = {.weight = 85.234, .roll = 102};

    struct Student *stup;
    stup = &stu;

    printf("%d\n", sizeof(struct Student));

    printf("%p\n %p\n", stup, &stu2);

    printf("%d %lf\n", stup->roll, stup->weight);

    return 0;
}