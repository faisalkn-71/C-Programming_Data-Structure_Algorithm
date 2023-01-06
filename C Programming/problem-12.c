#include<stdio.h>
int main()
{
    int roll, phy, math, chem, total, avg;
    char name[20];

    printf("Please enter your roll no: ");
    scanf("%d", &roll);

    printf("Please, enter your name: ");
    scanf("%s", &name);

    printf("Please, enter the marks of math, phy and chem: ");
    scanf("%d %d %d", &math, &phy, &chem);

    total = math + phy + chem;
    avg = total/3;


    printf("\n");
    printf("\n");
    printf("\n");

    printf("Roll NO: %d\n", roll);
    printf("Student Name: %s\n", name);
    printf("Marks in Math: %d\n", math);
    printf("Marks in Physics: %d\n", phy);
    printf("Marks in Chemistry: %d\n", chem);
    printf("Total Marks: %d\n", total);
    printf("Average: %d\n", avg);

    if(avg>=80){
        printf("Division: First");
    }
    else if(avg<80 && avg>=60){
        printf("Division: Second");
    }
    else if(avg<60 && avg>=40){
        printf("Division: Third");
    }
    else{
        printf("Division: Fail");
    }
    return 0;
}
