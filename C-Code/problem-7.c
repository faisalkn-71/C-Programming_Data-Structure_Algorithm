#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Please,enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2){
        printf("The  num1 is greater than num2.\n");
    }
    else if(num1 < num2){
        printf("The num1 is less than num2.\n");
    }
    else{
        printf("Both numbers are same.\n");
    }
    return 0;
}
