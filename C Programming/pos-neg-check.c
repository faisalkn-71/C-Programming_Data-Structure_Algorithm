#include<stdio.h>
int main()
{

    int number;
    printf("Please, enter a number: ");
    scanf("%d", &number);

    if(number>0){
        printf("The given number is positive.\n");
    }
    else if(number<0){
        printf("The given number is negative.\n");
    }
    else{
        printf("The given number is zero.\n");
    }

    return 0;
}
