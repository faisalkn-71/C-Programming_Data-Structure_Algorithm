#include<stdio.h>
int main()
{
    int age;
    printf("Please, enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Congratulations! You are eligible for casting your vote.\n");
    }
    else{
        printf("Sorry, you cannot cast you vote.\n");
    }
    return 0;
}
