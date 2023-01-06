#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks;
};

int main()
{
    struct Student stu;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", stu.name);
    printf("Enter roll number: ");
    scanf("%d", &stu.roll);
    printf("Enter marks: ");
    scanf("%d", &stu.marks);

    printf("Displaying Information:\nName: %s\nRoll number: %d\nMarks: %.d\n", stu.name, stu.roll, stu.marks);

    return 0;
}
