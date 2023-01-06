#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Please, enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1>num2){
        printf("Number1 is greater than number2.\n");
    }
    else{
        printf("Number1 is less than number2.");
    }
    return 0;
}
