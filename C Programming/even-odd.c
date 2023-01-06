#include<stdio.h>
int main()
{
    int number;
    printf("Please, enter a number: ");
    scanf("%d", &number);

    if(number%2==0){
        printf("The number is an even number.\n");
    }

    else{
        printf("The number is an odd number.\n");
    }

    return 0;
}
