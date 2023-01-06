#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    double mark;
};

void AplusStudent(struct Student s)
{
    printf("Roll = %d, Name = %s, Marks = %lf\n", s.roll, s.name, s.mark);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    struct Student cls[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d %s %lf", &cls[i].roll, cls[i].name, &cls[i].mark);
    }

    for (i = 0; i < n; i++)
    {
        if (cls[i].mark >= 80)
            AplusStudent(cls[i]);
    }

    return 0;
}