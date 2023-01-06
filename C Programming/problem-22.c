#include<stdio.h>
int main()
{

    int number, bonus;

    printf("Please, enter your number and bonus marks: ");
    scanf("%d%d", &number, &bonus);


    if(number>0 && bonus>0){
        if(number+bonus>=100){
            printf("Yes, Your  number became 100. YAA!");
        }
        else{
            printf("Opss! Your number didn't become 100.\n ");
        }
    }
    else{
        printf("idiot read the question again and give me the right input.\n");


    }

    return 0;
}
